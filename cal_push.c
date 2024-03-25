/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cal_push.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <asohrabi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 11:18:50 by asohrabi          #+#    #+#             */
/*   Updated: 2024/02/23 13:05:53 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	cal_push_ab(t_list_m *list_a, t_list_m *list_b)
{
	int			i;
	t_list_m	*temp;

	if (!list_a || !list_b) // Added check for non-empty list_a and list_b
		return (-1);
	i = cal_rrr_ab(list_a, list_b, list_a->n);
	temp = list_a;
	while (temp->next) //add check - instead of while(temp)
	{
		if (i > cal_rr_ab(list_a, list_b, temp->n))
			i = cal_rr_ab(list_a, list_b, temp->n);
		if (i > cal_rrr_ab(list_a, list_b, temp->n))
			i = cal_rrr_ab(list_a, list_b, temp->n);
		if (i > cal_rarrb_ab(list_a, list_b, temp->n))
			i = cal_rarrb_ab(list_a, list_b, temp->n);
		if (i > cal_rrarb_ab(list_a, list_b, temp->n))
			i = cal_rrarb_ab(list_a, list_b, temp->n);
		temp = temp->next;
	}
	return (i);
}

int	cal_push_ba(t_list_m *list_a, t_list_m *list_b)
{
	int			i;
	t_list_m	*temp;

	if (!list_a || !list_b) // Added check for non-empty list_a and list_b
		return (-1);
	i = cal_rrr_ba(list_a, list_b, list_a->n);
	temp = list_a;
	while (temp->next) //add check - instead of while(temp)
	{
		if (i > cal_rr_ba(list_a, list_b, temp->n))
			i = cal_rr_ba(list_a, list_b, temp->n);
		if (i > cal_rrr_ba(list_a, list_b, temp->n))
			i = cal_rrr_ba(list_a, list_b, temp->n);
		if (i > cal_rarrb_ba(list_a, list_b, temp->n))
			i = cal_rarrb_ba(list_a, list_b, temp->n);
		if (i > cal_rrarb_ba(list_a, list_b, temp->n))
			i = cal_rrarb_ba(list_a, list_b, temp->n);
		temp = temp->next;
	}
	return (i);
}
