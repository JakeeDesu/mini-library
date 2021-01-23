/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmhindat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 09:56:45 by hmhindat          #+#    #+#             */
/*   Updated: 2018/10/09 10:36:10 by hmhindat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	unsigned int in;

	if (n < 0)
	{
		ft_putchar('-');
		in = -n;
	}
	else
		in = n;
	if (in >= 10)
	{
		ft_putnbr((int)(in / 10));
		in = in % 10;
	}
	if (in < 10)
		ft_putchar(in + '0');
}
