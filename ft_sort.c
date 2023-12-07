/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <asohrabi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:23:44 by asohrabi          #+#    #+#             */
/*   Updated: 2023/12/07 13:49:14 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_sort_three(t_list **list)
{
	if (ft_min(*list) == (*list)->n)
	{
		rra(list, 1);
		sa(list, 1);
	}
	else if (ft_max(*list) == (*list)->n)
	{
		ra(list, 1);
		if (!check_sorted(*list))
			sa(list, 1);
	}
	else
	{
		if (find_index(*list, ft_max(*list)) == 1)
			rra(list, 1);
		else
			sa(list, 1);
	}
}

static void	ft_sort_b_till_three(t_list **list_a, t_list **list_b)
{
	t_list	*temp;
	int		i;

	while (ft_lstsize(*list_a) > 3 && !check_sorted(*list_a))
	{
		temp = *list_a;
		i = cal_push_ab(*list_a, *list_b);
		while (i >= 0 && temp)
		{
			if (i == cal_rrr_ab(*list_a, *list_b, temp->n))
				apply_rrr(list_a, list_b, temp->n, 'a');
			else if (i == cal_rr_ab(*list_a, *list_b, temp->n))
				apply_rr(list_a, list_b, temp->n, 'a');
			else if (i == cal_rarrb_ab(*list_a, *list_b, temp->n))
				apply_rarrb(list_a, list_b, temp->n, 'a');
			else if (i == cal_rrarb_ab(*list_a, *list_b, temp->n))
				apply_rrarb(list_a, list_b, temp->n, 'a');
			else
				temp = temp->next;
		}
	}
}

static t_list	*ft_sort_list_b(t_list **list_a)
{
	t_list	*list_b;

	list_b = NULL;
	if (ft_lstsize(*list_a) > 3 && !check_sorted(*list_a))
		pb(&list_b, list_a);
	if (ft_lstsize(*list_a) > 3 && !check_sorted(*list_a))
		pb(&list_b, list_a);
	if (ft_lstsize(*list_a) > 3 && !check_sorted(*list_a))
		ft_sort_b_till_three(list_a, &list_b);
	if (!check_sorted(*list_a))
		ft_sort_three(list_a);
	return (list_b);
}

static t_list	**ft_sort_list_a(t_list **list_a, t_list **list_b)
{
	t_list	*temp;
	int		i;

	while (*list_b)
	{
		temp = *list_b;
		i = cal_push_ba(*list_a, *list_b);
		while (i >= 0 && temp)
		{
			if (i == cal_rrr_ba(*list_a, *list_b, temp->n))
				apply_rrr(list_a, list_b, temp->n, 'b');
			else if (i == cal_rr_ba(*list_a, *list_b, temp->n))
				apply_rr(list_a, list_b, temp->n, 'b');
			else if (i == cal_rarrb_ba(*list_a, *list_b, temp->n))
				apply_rarrb(list_a, list_b, temp->n, 'b');
			else if (i == cal_rrarb_ba(*list_a, *list_b, temp->n))
				apply_rrarb(list_a, list_b, temp->n, 'b');
			else
				temp = temp->next;
		}
	}
	return (list_a);
}

void	ft_sort(t_list **list_a)
{
	t_list	*list_b;
	int		i;

	list_b = NULL;
	if (ft_lstsize(*list_a) == 2)
		sa(list_a, 1);
	else
	{
		list_b = ft_sort_list_b(list_a);
		list_a = ft_sort_list_a(list_a, &list_b);
		i = find_index(*list_a, ft_min(*list_a));
		if (i < ft_lstsize(*list_a) - i)
		{
			while ((*list_a)->n != ft_min(*list_a))
				ra(list_a, 1);
		}
		else
		{
			while ((*list_a)->n != ft_min(*list_a))
				rra(list_a, 1);
		}
	}
}
