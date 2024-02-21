/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <asohrabi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:53:45 by asohrabi          #+#    #+#             */
/*   Updated: 2024/02/21 13:14:19 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	apply_rrr(t_list_m **list_a, t_list_m **list_b, int nbr, char c)
{
	if (c == 'a')
	{
		if ((*list_a)->n != nbr && cal_insert_index_b(*list_b, nbr) > 0)
			rrr(list_a, list_b);
		if ((*list_a)->n != nbr)
			rra(list_a, 1);
		if (cal_insert_index_b(*list_b, nbr) > 0)
			rrb(list_b, 1);
		pb(list_b, list_a);
	}
	else if (c == 'b')
	{
		if ((*list_b)->n != nbr && cal_insert_index_a(*list_a, nbr) > 0)
			rrr(list_a, list_b);
		if ((*list_b)->n != nbr)
			rrb(list_b, 1);
		if (cal_insert_index_a(*list_a, nbr) > 0)
			rra(list_a, 1);
		pa(list_a, list_b);
	}
}

void	apply_rr(t_list_m **list_a, t_list_m **list_b, int nbr, char c)
{
	if (c == 'a')
	{
		if ((*list_a)->n != nbr && cal_insert_index_b(*list_b, nbr) > 0)
			rr(list_a, list_b);
		if ((*list_a)->n != nbr)
			ra(list_a, 1);
		if (cal_insert_index_b(*list_b, nbr) > 0)
			rb(list_b, 1);
		pb(list_b, list_a);
	}
	else if (c == 'b')
	{
		if ((*list_b)->n != nbr && cal_insert_index_a(*list_a, nbr) > 0)
			rr(list_a, list_b);
		if ((*list_b)->n != nbr)
			rb(list_b, 1);
		if (cal_insert_index_a(*list_a, nbr) > 0)
			ra(list_a, 1);
		pa(list_a, list_b);
	}
}

void	apply_rarrb(t_list_m **list_a, t_list_m **list_b, int nbr, char c)
{
	if (c == 'a')
	{
		if ((*list_a)->n != nbr)
			ra(list_a, 1);
		if (cal_insert_index_b(*list_b, nbr) > 0)
			rrb(list_b, 1);
		pb(list_b, list_a);
	}
	else if (c == 'b')
	{
		if (cal_insert_index_a(*list_a, nbr) > 0)
			ra(list_a, 1);
		if ((*list_b)->n != nbr)
			rrb(list_b, 1);
		pa(list_a, list_b);
	}
}

void	apply_rrarb(t_list_m **list_a, t_list_m **list_b, int nbr, char c)
{
	if (c == 'a')
	{
		if ((*list_a)->n != nbr)
			rra(list_a, 1);
		if (cal_insert_index_b(*list_b, nbr) > 0)
			rb(list_b, 1);
		pb(list_b, list_a);
	}
	else if (c == 'b')
	{
		if (cal_insert_index_a(*list_a, nbr) > 0)
			rra(list_a, 1);
		if ((*list_b)->n != nbr)
			rb(list_b, 1);
		pa(list_a, list_b);
	}
}
