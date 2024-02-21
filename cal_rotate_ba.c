/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cal_rotate_ba.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <asohrabi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 12:21:06 by asohrabi          #+#    #+#             */
/*   Updated: 2024/02/21 13:15:53 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	cal_rrr_ba(t_list_m *list_a, t_list_m *list_b, int nbr)
{
	int	i;

	i = 0;
	if (cal_insert_index_a(list_a, nbr))
		i = ft_lstsize_m(list_a) - cal_insert_index_a(list_a, nbr);
	if (find_index(list_b, nbr)
		&& (i < (ft_lstsize_m(list_b) - find_index(list_b, nbr))))
		i = ft_lstsize_m(list_b) - find_index(list_b, nbr);
	return (i);
}

int	cal_rr_ba(t_list_m *list_a, t_list_m *list_b, int nbr)
{
	int	i;

	i = cal_insert_index_a(list_a, nbr);
	if (i < find_index(list_b, nbr))
		i = find_index(list_b, nbr);
	return (i);
}

int	cal_rarrb_ba(t_list_m *list_a, t_list_m *list_b, int nbr)
{
	int	i;

	i = 0;
	if (find_index(list_b, nbr))
		i = ft_lstsize_m(list_b) - find_index(list_b, nbr);
	i = cal_insert_index_a(list_a, nbr) + i;
	return (i);
}

int	cal_rrarb_ba(t_list_m *list_a, t_list_m *list_b, int nbr)
{
	int	i;

	i = 0;
	if (cal_insert_index_a(list_a, nbr))
		i = ft_lstsize_m(list_a) - cal_insert_index_a(list_a, nbr);
	i = find_index(list_b, nbr) + i;
	return (i);
}
