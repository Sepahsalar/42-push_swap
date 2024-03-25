/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_both.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <asohrabi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:08:54 by asohrabi          #+#    #+#             */
/*   Updated: 2024/03/25 13:18:16 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ss(t_list_m **list_a, t_list_m **list_b)
{
	if (!*list_a || !((*list_a)->next) || !*list_b || !((*list_b)->next))
		return ;
	sa(list_a, 0);
	sb(list_b, 0);
	ft_putendl_fd("ss", STDOUT_FILENO);
}

void	rr(t_list_m **list_a, t_list_m **list_b)
{
	if (!*list_a || !((*list_a)->next) || !*list_b || !((*list_b)->next))
		return ;
	ra(list_a, 0);
	rb(list_b, 0);
	ft_putendl_fd("rr", STDOUT_FILENO);
}

void	rrr(t_list_m **list_a, t_list_m **list_b)
{
	if (!*list_a || !((*list_a)->next) || !*list_b || !((*list_b)->next))
		return ;
	rra(list_a, 0);
	rrb(list_b, 0);
	ft_putendl_fd("rrr", STDOUT_FILENO);
}
