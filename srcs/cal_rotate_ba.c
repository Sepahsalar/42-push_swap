/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cal_rotate_ba.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <asohrabi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 12:21:06 by asohrabi          #+#    #+#             */
/*   Updated: 2024/04/10 17:52:07 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <stdio.h>
// This function calculates how many times we should rotate the stacks together.
int	cal_rrr_ba(t_list_m *list_a, t_list_m *list_b, int nbr)
{
	int	i;

	i = 0;
	printf("nbr - rrr = %d\n", nbr);
	if (cal_insert_index_a(list_a, nbr))
	{
		i = ft_lstsize_m(list_a) - cal_insert_index_a(list_a, nbr);
		printf("i1 - rrr = %d\n", i);
	}
	if (find_index(list_b, nbr)
		&& (i < (ft_lstsize_m(list_b) - find_index(list_b, nbr))))
	{
		i = ft_lstsize_m(list_b) - find_index(list_b, nbr);
		printf("i2 - rrr = %d\n", i);
	}
	return (i);
}

int	cal_rr_ba(t_list_m *list_a, t_list_m *list_b, int nbr)
{
	int	i;

	printf("nbr - rr = %d\n", nbr);
	i = cal_insert_index_a(list_a, nbr);
	printf("i1 - rr = %d\n", i);
	if (i < find_index(list_b, nbr))
	{
		i = find_index(list_b, nbr);
		printf("i2 - rr = %d\n", i);
	}
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
