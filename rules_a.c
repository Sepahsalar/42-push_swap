/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <asohrabi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 10:42:14 by asohrabi          #+#    #+#             */
/*   Updated: 2024/02/21 13:21:09 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list_m **list_a, int i)
{
	t_list_m	*temp;

	if (!*list_a || !((*list_a)->next))
		return ;
	temp = *list_a;
	*list_a = (*list_a)->next;
	temp->next = (*list_a)->next;
	(*list_a)->next = temp;
	if (i == 1)
		write(1, "sa\n", 3);
}

void	pa(t_list_m **list_a, t_list_m **list_b)
{
	t_list_m	*temp;

	if (!*list_b)
		return ;
	temp = *list_a;
	*list_a = *list_b;
	*list_b = (*list_b)->next;
	(*list_a)->next = temp;
	write(1, "pa\n", 3);
}

void	ra(t_list_m **list_a, int i)
{
	t_list_m	*temp;

	if (!*list_a || !((*list_a)->next))
		return ;
	temp = *list_a;
	*list_a = ft_lstlast_m(*list_a);
	(*list_a)->next = temp;
	*list_a = temp->next;
	temp->next = NULL;
	if (i == 1)
		write(1, "ra\n", 3);
}

void	rra(t_list_m **list_a, int i)
{
	t_list_m	*temp;
	int			j;

	if (!*list_a || !((*list_a)->next))
		return ;
	j = 0;
	temp = *list_a;
	while ((*list_a)->next)
	{
		*list_a = (*list_a)->next;
		j++;
	}
	(*list_a)->next = temp;
	while (j > 1)
	{
		temp = temp->next;
		j--;
	}
	temp->next = NULL;
	if (i == 1)
		write(1, "rra\n", 4);
}
