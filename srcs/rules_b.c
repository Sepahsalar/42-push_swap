/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_b.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <asohrabi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:08:31 by asohrabi          #+#    #+#             */
/*   Updated: 2024/03/25 11:12:00 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sb(t_list_m **list_b, int i)
{
	t_list_m	*temp;

	if (!*list_b || !((*list_b)->next))
		return ;
	temp = *list_b;
	*list_b = (*list_b)->next;
	temp->next = (*list_b)->next;
	(*list_b)->next = temp;
	if (i == 1)
		ft_putendl_fd("sb", 1);
}

void	pb(t_list_m **list_b, t_list_m **list_a)
{
	t_list_m	*temp;

	if (!*list_a)
		return ;
	temp = *list_b;
	*list_b = *list_a;
	*list_a = (*list_a)->next;
	(*list_b)->next = temp;
	ft_putendl_fd("pb", 1);
}

void	rb(t_list_m **list_b, int i)
{
	t_list_m	*temp;

	if (!*list_b || !((*list_b)->next))
		return ;
	temp = *list_b;
	*list_b = ft_lstlast_m(*list_b);
	(*list_b)->next = temp;
	*list_b = temp->next;
	temp->next = NULL;
	if (i == 1)
		ft_putendl_fd("rb", 1);
}

void	rrb(t_list_m **list_b, int i)
{
	t_list_m	*temp;
	int			j;

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
		ft_putendl_fd("rrb", 1);
}
