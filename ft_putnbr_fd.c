/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmhindat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 11:04:56 by hmhindat          #+#    #+#             */
/*   Updated: 2018/10/09 11:18:13 by hmhindat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int in;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		in = -n;
	}
	else
		in = n;
	if (in >= 10)
	{
		ft_putnbr_fd((int)(in / 10), fd);
		in = in % 10;
	}
	if (in < 10)
		ft_putchar_fd(in + '0', fd);
}
