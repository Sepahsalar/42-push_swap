/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_b.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <asohrabi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:08:31 by asohrabi          #+#    #+#             */
/*   Updated: 2023/12/01 18:29:54 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_list **list_b, int i)
{
	t_list	*temp;

	if (!*list_b || !((*list_b)->next))
		return ;
	temp = *list_b;
	*list_b = (*list_b)->next;
	temp->next = (*list_b)->next;
	(*list_b)->next = temp;
	if (i == 1)
		write(1, "sb\n", 3);
}

void	pb(t_list **list_b, t_list **list_a)
{
	t_list	*temp;

	if (!*list_a)
		return ;
	temp = *list_b;
	*list_b = *list_a;
	*list_a = (*list_a)->next;
	(*list_b)->next = temp;
	write(1, "pb\n", 3);
}

void	rb(t_list **list_b, int i)
{
	t_list	*temp;

	if (!*list_b || !((*list_b)->next))
		return ;
	temp = *list_b;
	*list_b = ft_lstlast(*list_b);
	(*list_b)->next = temp;
	*list_b = temp->next;
	temp->next = NULL;
	if (i == 1)
		write(1, "rb\n", 3);
}

void	rrb(t_list **list_b, int i)
{
	t_list	*temp;
	int		j;

	if (!*list_b || !((*list_b)->next))
		return ;
	j = 0;
	temp = *list_b;
	while ((*list_b)->next)
	{
		*list_b = (*list_b)->next;
		j++;
	}
	(*list_b)->next = temp;
	while (j > 1)
	{
		temp = temp->next;
		j--;
	}
	temp->next = NULL;
	if (i == 1)
		write(1, "rrb\n", 4);
}
