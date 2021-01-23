/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmhindat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 02:21:39 by hmhindat          #+#    #+#             */
/*   Updated: 2018/10/11 06:46:24 by hmhindat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int		ft_jumpf_w(char *str)
{
	unsigned int i;

	i = 0;
	while (*str != '\0' && !(*str != ' ' && *str != '\t' && *str != '\n'))
	{
		str++;
		i++;
	}
	return (i);
}

static	unsigned int	ft_jumpl_w(char *str)
{
	unsigned int	i;

	i = 0;
	while (*str != '\0')
		str++;
	str--;
	while (*str != '\0' && !(*str != ' ' && *str != '\t' && *str != '\n'))
	{
		str--;
		i++;
	}
	return (i);
}

char					*ft_strtrim(char const *s)
{
	char			*str;
	unsigned int	lw;
	unsigned int	i;

	if (s != NULL)
	{
		lw = ft_strlen(s) - (ft_jumpf_w((char*)s) + ft_jumpl_w((char*)s));
		if (!(str = (char*)malloc((lw + 1) * sizeof(char))))
			return (NULL);
		if (ft_jumpf_w((char*)s) == ft_strlen(s))
		{
			*str = '\0';
			return (str);
		}
		i = 0;
		while (i < lw)
		{
			*(str + i) = *(s + ft_jumpf_w((char*)s) + i);
			i++;
		}
		*(str + i) = '\0';
		return (str);
	}
	else
		return (NULL);
}
