/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmhindat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 20:10:53 by hmhindat          #+#    #+#             */
/*   Updated: 2018/10/11 21:55:04 by hmhindat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_test(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			return (0);
		s1++;
		s2++;
	}
	if (*s1 == '\0' && *s2 != 0)
		return (0);
	return (1);
}

char		*ft_strstr(const char *s1, const char *s2)
{
	int		l;
	char	*ps1;
	char	*ps2;

	l = ft_strlen(s1) - ft_strlen(s2);
	ps2 = (char*)s2;
	ps1 = (char*)s1;
	if (s2 == NULL || *s2 == '\0')
		return (ps1);
	while (l >= 0 && *ps1 != '\0')
	{
		if (ft_test(ps1, ps2))
			return (ps1);
		ps2 = (char*)s2;
		l--;
		ps1++;
	}
	return (NULL);
}
