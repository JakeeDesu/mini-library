/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmhindat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 21:39:27 by hmhindat          #+#    #+#             */
/*   Updated: 2018/10/11 06:56:26 by hmhindat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	indx;
	char			*nstr;

	if (s != NULL && f != NULL)
	{
		indx = 0;
		while (*(s + indx) != '\0')
			indx++;
		if (!(nstr = (char*)malloc((indx + 1) * sizeof(char))))
			return (NULL);
		indx = 0;
		while (*(s + indx) != '\0')
		{
			*(nstr + indx) = f(indx, *(s + indx));
			indx++;
		}
		*(nstr + indx) = '\0';
		return (nstr);
	}
	return (NULL);
}
