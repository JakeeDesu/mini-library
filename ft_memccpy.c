/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmhindat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 04:12:15 by hmhindat          #+#    #+#             */
/*   Updated: 2018/10/11 23:28:43 by hmhindat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *str1, const void *str2, int c, size_t n)
{
	unsigned char	*pstr1;
	unsigned char	*pstr2;

	pstr1 = (unsigned char*)str1;
	pstr2 = (unsigned char*)str2;
	while (n > 0)
	{
		if (*pstr2 == (unsigned char)c)
		{
			*pstr1 = *pstr2;
			return (++pstr1);
		}
		*(pstr1++) = *(pstr2++);
		n--;
	}
	return (NULL);
}
