/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_rarrb_rrarb.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <asohrabi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:36:06 by asohrabi          #+#    #+#             */
/*   Updated: 2024/04/15 16:57:06 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	apply_rarrb(t_list_m **list_a, t_list_m **list_b, int nbr)
{
	int	i_ra;
	int	i_rrb;

	i_rrb = 0;
	if (cal_insert_index(*list_b, nbr) && ft_lstsize_m(*list_b) != 1)
		i_rrb = ft_lstsize_m(*list_b) - cal_insert_index(*list_b, nbr);
	i_ra = find_index(*list_a, nbr);
	while (i_ra)
	{
		ra(list_a, 1);
		i_ra--;
	}
	while (i_rrb)
	{
		rrb(list_b, 1);
		i_rrb--;
	}
	pb(list_b, list_a);
}

void	apply_rrarb(t_list_m **list_a, t_list_m **list_b, int nbr)
{
	int	i_rra;
	int	i_rb;

	i_rra = 0;
	if (find_index(*list_a, nbr))
		i_rra = ft_lstsize_m(*list_a) - find_index(*list_a, nbr);
	i_rb = cal_insert_index(*list_b, nbr);
	while (i_rra)
	{
		rra(list_a, 1);
		i_rra--;
	}
	while (i_rb)
	{
		rb(list_b, 1);
		i_rb--;
	}
	pb(list_b, list_a);
}
