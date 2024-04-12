/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cal_push.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <asohrabi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 11:18:50 by asohrabi          #+#    #+#             */
/*   Updated: 2024/04/12 14:29:23 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <stdio.h>
t_min	cal_push_ab(t_list_m *list_a, t_list_m *list_b)
{
	int			i;
	int			p;
	t_min		result;
	t_list_m	*temp;

	if (!list_a || !list_b) // Added check for non-empty list_a and list_b
	{
		result.min = 0;
		result.move = -1;
		result.s = 0;
	}
	result.move = INT_MAX;
	temp = list_a;
	while (temp)
	{
		i = cal_rrr_ab(list_a, list_b, list_a->n);
		p = 1;
		if (i > cal_rr_ab(list_a, list_b, temp->n))
		{
			i = cal_rr_ab(list_a, list_b, temp->n);
			p = 2;
		}
		if (i > cal_rarrb_ab(list_a, list_b, temp->n))
		{
			i = cal_rarrb_ab(list_a, list_b, temp->n);
			p = 3;
		}
		if (i > cal_rrarb_ab(list_a, list_b, temp->n))
		{
			i = cal_rrarb_ab(list_a, list_b, temp->n);
			p = 4;
		}
		if (result.move > i)
		{
			result.min = temp->n;
			result.move = i;
			result.s = p;
		}
		temp = temp->next;
	}
	return (result);
}

t_min	cal_push_ba(t_list_m *list_a, t_list_m *list_b)
{
	int			i;
	int			p;
	t_min		result;
	t_list_m	*temp;

	if (!list_a || !list_b)
	{
		result.min = 0;
		result.move = -1;
	}
	result.move = INT_MAX;
	temp = list_b;
	while (temp)
	{
		i = cal_rrr_ba(list_a, list_b, temp->n);
		p = 1;
		if (i > cal_rr_ba(list_a, list_b, temp->n))
		{
			i = cal_rr_ba(list_a, list_b, temp->n);
			p = 2;
		}
		if (i > cal_rarrb_ba(list_a, list_b, temp->n))
		{
			i = cal_rarrb_ba(list_a, list_b, temp->n);
			p = 3;
		}
		if (i > cal_rrarb_ba(list_a, list_b, temp->n))
		{
			i = cal_rrarb_ba(list_a, list_b, temp->n);
		}
		// printf("i ba = %d\n", i);
		// printf("temp->n ba = %d\n", temp->n);
		if (result.move > i)
		{
			result.min = temp->n;
			result.move = i;
			result.s = p;
		}
		temp = temp->next;
	}
	// printf("result.move = %d\n", result.move);
	// printf("result.min  = %d\n", result.min);
	return (result);
}
