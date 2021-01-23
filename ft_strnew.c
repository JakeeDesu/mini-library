/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmhindat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 17:17:14 by hmhindat          #+#    #+#             */
/*   Updated: 2018/10/11 04:56:10 by hmhindat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_strnew(size_t size)
{
	int		n;
	char	*str;

	n = 0;
	if ((str = (char*)malloc((size + 1) * sizeof(char))))
	{
		while (n < (int)size)
		{
			str[n] = '\0';
			n++;
		}
		str[n] = '\0';
		return ((void*)str);
	}
	return (NULL);
}
