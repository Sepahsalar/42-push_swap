/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cal_rotate_ab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <asohrabi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 11:43:48 by asohrabi          #+#    #+#             */
/*   Updated: 2024/01/30 10:40:28 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	cal_rrr_ab(t_list *list_a, t_list *list_b, int nbr)
{
	int	i;

	i = 0;
	if (cal_insert_index_b(list_b, nbr))
		i = ft_lstsize(list_b) - cal_insert_index_b(list_b, nbr);
	if (find_index(list_a, nbr)
		&& (i < (ft_lstsize(list_a) - find_index(list_a, nbr))))
		i = ft_lstsize(list_a) - find_index(list_a, nbr);
	return (i);
}

int	cal_rr_ab(t_list *list_a, t_list *list_b, int nbr)
{
	int	i;

	i = cal_insert_index_b(list_b, nbr);
	if (i < find_index(list_a, nbr))
		i = find_index(list_a, nbr);
	return (i);
}

int	cal_rarrb_ab(t_list *list_a, t_list *list_b, int nbr)
{
	int	i;

	i = 0;
	if (cal_insert_index_b(list_b, nbr))
		i = ft_lstsize(list_b) - cal_insert_index_b(list_b, nbr);
	i = find_index(list_a, nbr) + i;
	return (i);
}

int	cal_rrarb_ab(t_list *list_a, t_list *list_b, int nbr)
{
	int	i;

	i = 0;
	if (find_index(list_a, nbr))
		i = ft_lstsize(list_a) - find_index(list_a, nbr);
	i = cal_insert_index_b(list_b, nbr) + i;
	return (i);
}
