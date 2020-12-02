/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnabil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 15:02:50 by hnabil            #+#    #+#             */
/*   Updated: 2019/11/13 15:02:56 by hnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *list;
	t_list *preced;

	list = *lst;
	while (list)
	{
		preced = list;
		list = list->next;
		del(preced->content);
		free(preced);
	}
	*lst = NULL;
}
