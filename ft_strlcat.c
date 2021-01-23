/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmhindat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 17:05:15 by hmhindat          #+#    #+#             */
/*   Updated: 2018/10/10 07:59:38 by hmhindat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *s1, const char *s2, size_t n)
{
	unsigned int		in;
	char				*ps2;
	unsigned int		i;

	ps2 = (char*)s2;
	in = 0;
	i = 0;
	if (n > 0)
	{
		while ((size_t)in < (n) && *s1 != '\0')
		{
			s1++;
			in++;
		}
		if ((size_t)in == n)
			return (n + ft_strlen(s2));
		while ((size_t)(in + i) < (n - 1) && *ps2 != '\0')
		{
			*(s1++) = *(ps2++);
			i++;
		}
		*s1 = '\0';
		return ((size_t)in + ft_strlen(s2));
	}
	return (ft_strlen(s2));
}
