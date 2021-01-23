/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmhindat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 08:07:22 by hmhindat          #+#    #+#             */
/*   Updated: 2018/10/11 23:29:50 by hmhindat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t len)
{
	char			*pstr1;
	char			*pstr2;
	unsigned int	n;

	n = 0;
	pstr1 = (char*)str1;
	if (!(pstr2 = (char*)malloc((len) * sizeof(char))))
		return (NULL);
	while (n < len)
	{
		*(pstr2 + n) = *((char*)str2 + n);
		n++;
	}
	n = 0;
	while (len > n)
	{
		*(pstr1++) = *(pstr2++);
		n++;
	}
	return (str1);
}
