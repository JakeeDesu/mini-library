/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmhindat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 17:30:54 by hmhindat          #+#    #+#             */
/*   Updated: 2018/10/12 01:34:27 by hmhindat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strdel(char **as)
{
	char *delem;

	if (as != NULL && *as != NULL)
	{
		while (**as != '\0')
		{
			delem = *as;
			(*as)++;
			free(delem);
			delem = NULL;
		}
		free(*as);
		*as = NULL;
	}
}
