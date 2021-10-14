/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sazelda <sazelda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:27:36 by sazelda           #+#    #+#             */
/*   Updated: 2021/10/14 12:32:03 by sazelda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*new;

	while (lst)
	{
		new = ft_lstnew((*f)(lst->content));
		if (!new)
			ft_lstclear(&res, del);
		ft_lstadd_back(&res, new);
		lst = lst->next;
	}
	return (res);
}
