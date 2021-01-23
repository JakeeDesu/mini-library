/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmhindat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 23:42:02 by hmhindat          #+#    #+#             */
/*   Updated: 2018/10/11 04:00:32 by hmhindat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ps1;
	unsigned char	*ps2;
	int				in;

	in = 0;
	ps1 = (unsigned char*)s1;
	ps2 = (unsigned char*)s2;
	while (*ps1 != '\0' && *ps2 != '\0' && (size_t)in < n)
	{
		if ((*ps1 - *ps2) != 0)
			return (*ps1 - *ps2);
		in++;
		ps1++;
		ps2++;
	}
	if ((size_t)in == n)
		return (0);
	return (*ps1 - *ps2);
}
