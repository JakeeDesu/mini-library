/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmhindat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 01:20:29 by hmhindat          #+#    #+#             */
/*   Updated: 2018/10/12 00:59:54 by hmhindat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	len;
	unsigned int	i;
	char			*str;

	if (s1 != NULL && s2 != NULL)
	{
		len = ft_strlen(s1) + ft_strlen(s2) + 1;
		if (!(str = (char*)malloc(len * sizeof(char))))
			return (NULL);
		i = 0;
		while (*(s1 + i) != '\0')
		{
			*(str + i) = *((char*)s1 + i);
			i++;
		}
		i = 0;
		while (i < len - 1)
		{
			*(str + ft_strlen(s1) + i) = *((char*)s2 + i);
			i++;
		}
		*(str + len) = '\0';
		return (str);
	}
	return (NULL);
}
