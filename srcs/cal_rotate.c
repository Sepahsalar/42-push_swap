/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cal_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <asohrabi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 11:43:48 by asohrabi          #+#    #+#             */
/*   Updated: 2024/04/15 16:15:49 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	cal_rrr(t_list_m *list_a, t_list_m *list_b, int nbr)
{
	int	i;

	i = 0;
	if (cal_insert_index(list_b, nbr))
		i = ft_lstsize_m(list_b) - cal_insert_index(list_b, nbr);
	if (find_index(list_a, nbr)
		&& (i < (ft_lstsize_m(list_a) - find_index(list_a, nbr))))
		i = ft_lstsize_m(list_a) - find_index(list_a, nbr);
	return (i);
}

int	cal_rr(t_list_m *list_a, t_list_m *list_b, int nbr)
{
	int	i;

	i = cal_insert_index(list_b, nbr);
	if (i < find_index(list_a, nbr))
		i = find_index(list_a, nbr);
	return (i);
}

int	cal_rarrb(t_list_m *list_a, t_list_m *list_b, int nbr)
{
	int	i;

	i = 0;
	if (cal_insert_index(list_b, nbr))
		i = ft_lstsize_m(list_b) - cal_insert_index(list_b, nbr);
	i = find_index(list_a, nbr) + i;
	return (i);
}

int	cal_rrarb(t_list_m *list_a, t_list_m *list_b, int nbr)
{
	int	i;

	i = 0;
	if (find_index(list_a, nbr))
		i = ft_lstsize_m(list_a) - find_index(list_a, nbr);
	i = cal_insert_index(list_b, nbr) + i;
	return (i);
}
