/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmhindat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 17:55:35 by hmhindat          #+#    #+#             */
/*   Updated: 2018/10/10 22:12:08 by hmhindat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *psaver;

	if (lst == NULL)
		return (NULL);
	if (lst->next == NULL)
		return (lst = f(lst));
	psaver = f(lst);
	psaver->next = ft_lstmap(lst->next, f);
	return (psaver);
}
