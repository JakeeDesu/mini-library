/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmhindat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 21:26:45 by hmhindat          #+#    #+#             */
/*   Updated: 2018/10/11 06:56:00 by hmhindat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	unsigned int	len;
	char			*nstr;

	if (s != NULL && f != NULL)
	{
		len = 0;
		while (*(s + len) != '\0')
			len++;
		if (!(nstr = (char*)malloc((len + 1) * sizeof(char))))
			return (NULL);
		len = 0;
		while (*(s + len) != '\0')
		{
			*(nstr + len) = f(*(s + len));
			len++;
		}
		*(nstr + len) = '\0';
		return (nstr);
	}
	return (NULL);
}
