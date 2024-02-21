/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <asohrabi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:27:11 by asohrabi          #+#    #+#             */
/*   Updated: 2024/02/21 13:19:41 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list_m	*ft_lstlast_m(t_list_m *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

t_list_m	*ft_lstnew_m(int content)
{
	t_list_m	*list;

	list = (t_list_m *)malloc(sizeof(t_list_m));
	if (!list)
	{
		write (2, "Error\n", 6);
		exit(1);
	}
	list->n = content;
	list->next = NULL;
	return (list);
}

int	ft_lstsize_m(t_list_m *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}

void	ft_lstadd_back_m(t_list_m **list, t_list_m *new)
{
	if (!new || !list)
		return ;
	if (!*list)
	{
		*list = new;
		return ;
	}
	else
		(ft_lstlast_m(*list))->next = new;
}
