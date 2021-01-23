/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmhindat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 01:05:48 by hmhindat          #+#    #+#             */
/*   Updated: 2018/10/10 23:17:15 by hmhindat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;

	if (s != NULL)
	{
		if (!(str = (char*)malloc((len + 1) * sizeof(char))))
			return (NULL);
		i = 0;
		while ((size_t)i < len)
		{
			*(str + i) = *(s + start + i);
			i++;
		}
		*(str + i) = '\0';
		return (str);
	}
	else
		return (NULL);
}
