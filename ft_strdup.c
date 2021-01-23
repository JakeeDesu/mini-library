/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmhindat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 05:29:37 by hmhindat          #+#    #+#             */
/*   Updated: 2018/10/09 05:20:24 by hmhindat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int			cnt;
	int			i;
	char		*s2;
	char		*ps1;

	ps1 = (char*)s1;
	cnt = 0;
	while (*ps1 != '\0')
	{
		cnt++;
		ps1++;
	}
	s2 = (char*)malloc((cnt + 1) * sizeof(char));
	if (s2 == NULL)
		return (NULL);
	ps1 = (char*)s1;
	i = 0;
	while (ps1[i] != '\0')
	{
		s2[i] = ps1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
