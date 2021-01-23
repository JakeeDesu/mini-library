/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmhindat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 21:18:39 by hmhindat          #+#    #+#             */
/*   Updated: 2018/10/11 04:51:41 by hmhindat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int indx;

	if (s != NULL && f != NULL)
	{
		indx = 0;
		while (*(s + indx) != '\0')
		{
			f(indx, s + indx);
			indx++;
		}
	}
}
