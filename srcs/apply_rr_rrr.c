/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_rr_rrr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <asohrabi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:53:45 by asohrabi          #+#    #+#             */
/*   Updated: 2024/04/15 17:10:17 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static t_rotate	apply_rrr_helper(t_list_m **list_a, t_list_m **list_b, int nbr)
{
	t_rotate	count;

	count.i_rrr = 0;
	count.i_rrb = 0;
	count.i_rra = 0;
	count.i_rr = 0;
	count.i_rb = 0;
	count.i_ra = 0;
	if (cal_insert_index(*list_b, nbr) && ft_lstsize_m(*list_b) != 1)
		count.i_rrb = ft_lstsize_m(*list_b) - cal_insert_index(*list_b, nbr);
	if (find_index(*list_a, nbr))
		count.i_rra = ft_lstsize_m(*list_a) - find_index(*list_a, nbr);
	if (count.i_rra >= count.i_rrb)
	{
		count.i_rra = count.i_rra - count.i_rrb;
		count.i_rrr = count.i_rrb;
		count.i_rrb = 0;
	}
	else
	{
		count.i_rrb = count.i_rrb - count.i_rra;
		count.i_rrr = count.i_rra;
		count.i_rra = 0;
	}
	return (count);
}

void	apply_rrr(t_list_m **list_a, t_list_m **list_b, int nbr)
{
	t_rotate	count;

	count = apply_rrr_helper(list_a, list_b, nbr);
	while (count.i_rrr)
	{
		rrr(list_a, list_b);
		count.i_rrr--;
	}
	while (count.i_rra)
	{
		rra(list_a, 1);
		count.i_rra--;
	}
	while (count.i_rrb)
	{
		rrb(list_b, 1);
		count.i_rrb--;
	}
	pb(list_b, list_a);
}

static t_rotate	apply_rr_helper(t_list_m **list_a, t_list_m **list_b, int nbr)
{
	t_rotate	count;

	count.i_rrr = 0;
	count.i_rrb = 0;
	count.i_rra = 0;
	count.i_rr = 0;
	count.i_rb = cal_insert_index(*list_b, nbr);
	count.i_ra = find_index(*list_a, nbr);
	if (count.i_ra >= count.i_rb)
	{
		count.i_ra = count.i_ra - count.i_rb;
		count.i_rr = count.i_rb;
		count.i_rb = 0;
	}
	else
	{
		count.i_rb = count.i_rb - count.i_ra;
		count.i_rr = count.i_ra;
		count.i_ra = 0;
	}
	return (count);
}

void	apply_rr(t_list_m **list_a, t_list_m **list_b, int nbr)
{
	t_rotate	count;

	count = apply_rr_helper(list_a, list_b, nbr);
	while (count.i_rr)
	{
		rr(list_a, list_b);
		count.i_rr--;
	}
	while (count.i_ra)
	{
		ra(list_a, 1);
		count.i_ra--;
	}
	while (count.i_rb)
	{
		rb(list_b, 1);
		count.i_rb--;
	}
	pb(list_b, list_a);
}
