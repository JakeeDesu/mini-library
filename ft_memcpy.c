/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmhindat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 04:02:01 by hmhindat          #+#    #+#             */
/*   Updated: 2018/10/07 04:09:02 by hmhindat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	char	*pstr1;
	char	*pstr2;

	pstr1 = (char*)str1;
	pstr2 = (char*)str2;
	while (n > 0)
	{
		*(pstr1++) = *(pstr2++);
		n--;
	}
	return (str1);
}
