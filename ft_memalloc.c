/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmhindat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 10:33:21 by hmhindat          #+#    #+#             */
/*   Updated: 2018/10/08 18:22:23 by hmhindat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	int		i;
	char	*mem;

	i = 0;
	if ((mem = (char*)malloc(size)))
	{
		while ((size_t)i < size)
			mem[i++] = 0;
		return ((void*)mem);
	}
	return (NULL);
}
