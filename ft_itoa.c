/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmhindat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 08:59:58 by hmhindat          #+#    #+#             */
/*   Updated: 2018/10/12 00:28:39 by hmhindat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_strputnbr(int a, char *buf)
{
	unsigned int n;

	if (a < 0)
		n = -a;
	else
		n = a;
	if (n >= 10)
	{
		ft_strputnbr((int)(n / 10), buf - 1);
		n %= 10;
	}
	if (n < 10)
		*buf = '0' + n;
}

char		*ft_itoa(int n)
{
	int		len;
	int		nb;
	char	*str;

	nb = n;
	len = 0;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	if (nb < 0 || nb == 0)
		len++;
	if (!(str = (char*)malloc((len + 1) * sizeof(char))))
		return (NULL);
	if (nb < 0)
		*str = '-';
	ft_strputnbr(nb, str + len - 1);
	str[len] = '\0';
	return (str);
}
