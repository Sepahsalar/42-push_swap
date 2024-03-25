/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <asohrabi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 10:42:14 by asohrabi          #+#    #+#             */
/*   Updated: 2024/03/25 11:11:57 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

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
		ft_putendl_fd("sa", 1);
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
	ft_putendl_fd("pa", 1);
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
		ft_putendl_fd("ra", 1);
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
		ft_putendl_fd("rra", 1);
}
