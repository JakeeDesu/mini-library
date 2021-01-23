/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmhindat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 14:53:59 by hmhindat          #+#    #+#             */
/*   Updated: 2018/10/12 00:32:23 by hmhindat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list *elmd;

	while (*alst)
	{
		elmd = *alst;
		*alst = (*alst)->next;
		del((void*)elmd, elmd->content_size);
		elmd = NULL;
	}
}
