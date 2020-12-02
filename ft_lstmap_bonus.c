/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnabil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 14:34:54 by hnabil            #+#    #+#             */
/*   Updated: 2019/10/28 12:08:39 by hnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *l, void *(*f)(void *), void (*del)(void *))
{
	t_list *new;
	t_list *lst;
	t_list *list;

	list = l;
	if (!list || !f || !del)
		return (NULL);
	lst = NULL;
	while (list)
	{
		if (!(new = (t_list *)malloc(sizeof(t_list))))
		{
			ft_lstclear(&lst, del);
			return (NULL);
		}
		new->content = f(list->content);
		new->next = NULL;
		ft_lstadd_back(&lst, new);
		list = list->next;
	}
	return (lst);
}
