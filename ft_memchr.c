/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmhindat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 04:42:42 by hmhindat          #+#    #+#             */
/*   Updated: 2018/10/06 08:15:47 by hmhindat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*pstr;
	unsigned char	pc;

	pstr = (unsigned char*)str;
	pc = (unsigned char)c;
	while (n > 0)
	{
		if (*pstr == pc)
			return (pstr);
		pstr++;
		n--;
	}
	return (NULL);
}
