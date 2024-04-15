/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cal_push.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <asohrabi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 11:18:50 by asohrabi          #+#    #+#             */
/*   Updated: 2024/04/15 16:16:36 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_min	cal_push(t_list_m *list_a, t_list_m *list_b)
{
	int			i;
	int			p;
	t_min		result;
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
		i = cal_rrr(list_a, list_b, list_a->n);
		p = 1;
		if (i > cal_rr(list_a, list_b, temp->n))
		{
			i = cal_rr(list_a, list_b, temp->n);
			p = 2;
		}
		if (i > cal_rarrb(list_a, list_b, temp->n))
		{
			i = cal_rarrb(list_a, list_b, temp->n);
			p = 3;
		}
		if (i > cal_rrarb(list_a, list_b, temp->n))
		{
			i = cal_rrarb(list_a, list_b, temp->n);
			p = 4;
		}
		if (result.move > i)
		{
			result.min = temp->n;
			result.move = i;
			result.possibility = p;
		}
		temp = temp->next;
	}
	return (result);
}
