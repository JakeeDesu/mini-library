/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmhindat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 01:13:41 by hmhindat          #+#    #+#             */
/*   Updated: 2018/10/09 06:37:52 by hmhindat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_whitespaces(char c)
{
	if (c == ' ' || c == '\n' || c == '\t' || c == '\r' ||
		c == '\v' || c == '\f')
		return (1);
	return (0);
}

static int	ft_sign(char c)
{
	if (c == '-' || c == '+')
		return (1);
	return (0);
}

int			ft_atoi(const char *str)
{
	char			*pstr;
	unsigned int	nb;
	int				sign;

	nb = 0;
	pstr = (char*)str;
	sign = 1;
	while (*pstr != '\0' && ft_whitespaces(*pstr))
		pstr++;
	if (ft_sign(*pstr))
		sign = (*pstr++ == '-') ? -1 : 1;
	if (*pstr == '\0' || (*pstr < '0' && *pstr > '9'))
		return (0);
	else
		while (*pstr <= '9' && *pstr >= '0')
		{
			nb = (nb * 10) + (*(pstr++) - '0');
		}
	if (nb > 2147483648 || (nb == 2147483648 && sign == 1))
		return (0);
	return ((int)nb * sign);
}
