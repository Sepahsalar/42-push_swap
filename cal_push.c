/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cal_push.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <asohrabi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 11:18:50 by asohrabi          #+#    #+#             */
/*   Updated: 2023/12/01 12:20:10 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	cal_push_ab(t_list *list_a, t_list *list_b)
{
	int		i;
	t_list	*temp;

	i = cal_rrr_ab(list_a, list_b, list_a->n);
	temp = list_a;
	while (temp)
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

int	cal_push_ba(t_list *list_a, t_list *list_b)
{
	int		i;
	t_list	*temp;

	i = cal_rrr_ba(list_a, list_b, list_a->n);
	temp = list_a;
	while (temp)
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
