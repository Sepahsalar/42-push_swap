/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_both.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <asohrabi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:08:54 by asohrabi          #+#    #+#             */
/*   Updated: 2023/11/27 14:54:28 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss(t_list **list_a, t_list **list_b)
{
	if (!*list_a || !((*list_a)->next) || !*list_b || !((*list_b)->next))
		return ;
	sa(list_a, 0);
	sb(list_b, 0);
	write(1, "ss\n", 3);
}

void	rr(t_list **list_a, t_list **list_b)
{
	if (!*list_a || !((*list_a)->next) || !*list_b || !((*list_b)->next))
		return ;
	ra(list_a, 0);
	rb(list_b, 0);
	write(1, "rr\n", 3);
}

void	rrr(t_list **list_a, t_list **list_b)
{
	if (!*list_a || !((*list_a)->next) || !*list_b || !((*list_b)->next))
		return ;
	rra(list_a, 0);
	rrb(list_b, 0);
	write(1, "rrr\n", 4);
}
