/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cal_push.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <asohrabi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 11:18:50 by asohrabi          #+#    #+#             */
/*   Updated: 2024/04/15 17:16:01 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static t_push	cal_push_con(t_list_m *list_a, t_list_m *list_b, t_list_m *temp)
{
	t_push		cal;

	cal.min = 0;
	cal.move = cal_rrr(list_a, list_b, list_a->n);
	cal.possibility = 1;
	if (cal.move > cal_rr(list_a, list_b, temp->n))
	{
		cal.move = cal_rr(list_a, list_b, temp->n);
		cal.possibility = 2;
	}
	if (cal.move > cal_rarrb(list_a, list_b, temp->n))
	{
		cal.move = cal_rarrb(list_a, list_b, temp->n);
		cal.possibility = 3;
	}
	if (cal.move > cal_rrarb(list_a, list_b, temp->n))
	{
		cal.move = cal_rrarb(list_a, list_b, temp->n);
		cal.possibility = 4;
	}
	return (cal);
}

t_push	cal_push(t_list_m *list_a, t_list_m *list_b)
{
	t_push		cal;
	t_push		result;
	t_list_m	*temp;

	if (!list_a || !list_b)
	{
		result.min = 0;
		result.move = -1;
		result.possibility = 0;
	}
	result.move = INT_MAX;
	temp = list_a;
	while (temp)
	{
		cal = cal_push_con(list_a, list_b, temp);
		if (result.move > cal.move)
		{
			result.min = temp->n;
			result.move = cal.move;
			result.possibility = cal.possibility;
		}
		temp = temp->next;
	}
	return (result);
}
