/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmhindat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 20:26:03 by hmhindat          #+#    #+#             */
/*   Updated: 2018/10/11 23:27:40 by hmhindat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_test(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			return (0);
		s1++;
		s2++;
	}
	if (s1 == '\0')
		return (0);
	return (1);
}

char		*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int		l;
	char	*ps1;
	char	*ps2;

	l = ft_strlen(s1) - ft_strlen(s2);
	l = (n < ft_strlen(s1)) ? n - ft_strlen(s2) : l;
	ps2 = (char*)s2;
	ps1 = (char*)s1;
	if (*s2 == '\0')
		return (ps1);
	while (l >= 0)
	{
		if (ft_test(ps1, ps2))
			return (ps1);
		ps1++;
		l--;
	}
	return (NULL);
}
