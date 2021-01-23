/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmhindat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 02:12:20 by hmhindat          #+#    #+#             */
/*   Updated: 2018/10/12 01:52:19 by hmhindat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int				i;
	unsigned char	*b2;

	b2 = (unsigned char*)b;
	i = 0;
	while (i < (int)len)
	{
		b2[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
