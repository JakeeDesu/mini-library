/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmhindat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 10:57:03 by hmhindat          #+#    #+#             */
/*   Updated: 2018/10/10 22:58:43 by hmhindat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	char *ps;

	ps = (char*)s;
	if (s != NULL)
	{
		while (*ps != '\0')
		{
			ft_putchar_fd(*(ps++), fd);
		}
	}
}
