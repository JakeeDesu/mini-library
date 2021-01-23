/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmhindat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 04:02:00 by hmhindat          #+#    #+#             */
/*   Updated: 2018/10/11 06:51:52 by hmhindat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned	int	len_till_c(char *str, char c)
{
	unsigned int l;

	l = 0;
	while (*str != c && *(str++) != '\0')
		l++;
	return (l);
}

static unsigned int	jumpc(char *str, char c)
{
	unsigned int l;

	l = 0;
	while (*str == c && *(str++) != '\0')
		l++;
	return (l);
}

static unsigned int	ft_nb_w(char *str, char c)
{
	unsigned int l;

	l = 0;
	while (*str != '\0')
	{
		str += jumpc(str, c);
		if (len_till_c(str, c) != 0)
		{
			str += len_till_c(str, c);
			l++;
		}
	}
	return (l);
}

char				**ft_strsplit(char const *s, char c)
{
	char			**tab;
	char			*ps;
	unsigned int	i;

	if (s != NULL)
	{
		ps = (char*)s;
		i = 0;
		if (!(tab = (char**)malloc((ft_nb_w(ps, c) + 1) * sizeof(char*))))
			return (NULL);
		ps += jumpc(ps, c);
		while (i < ft_nb_w((char*)s, c))
		{
			tab[i] = (char*)malloc((len_till_c(ps, c) + 1) * sizeof(char));
			ft_strncpy(tab[i], (const char*)ps, (size_t)len_till_c(ps, c) + 1);
			tab[i][len_till_c(ps, c)] = '\0';
			ps += len_till_c(ps, c);
			ps += jumpc(ps, c);
			i++;
		}
		tab[i] = 0;
		return (tab);
	}
	else
		return (NULL);
}
