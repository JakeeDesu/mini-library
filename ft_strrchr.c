/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmhindat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 19:17:54 by hmhindat          #+#    #+#             */
/*   Updated: 2018/10/08 19:01:54 by hmhindat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s1, int c)
{
	int		l;
	char	cc;
	char	*ps;

	cc = (char)c;
	ps = (char*)s1;
	l = 0;
	while (*ps != '\0')
	{
		ps++;
		l++;
	}
	while (l-- >= 0)
	{
		if (*ps == cc)
			return (ps);
		ps--;
	}
	return (NULL);
}
