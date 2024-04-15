/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <asohrabi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:23:44 by asohrabi          #+#    #+#             */
/*   Updated: 2024/04/15 17:23:13 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	ft_sort_three(t_list_m **list)
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

static void	ft_sort_b_till_three(t_list_m **list_a, t_list_m **list_b)
{
	t_push		result;

	result = cal_push(*list_a, *list_b);
	while (ft_lstsize_m(*list_a) > 3 && result.move >= 0)
	{
		result = cal_push(*list_a, *list_b);
		if (result.move == 0)
			pb(list_b, list_a);
		else
		{
			result.move = INT_MAX;
			if (result.possibility == 1)
				apply_rrr(list_a, list_b, result.min);
			else if (result.possibility == 2)
				apply_rr(list_a, list_b, result.min);
			else if (result.possibility == 3)
				apply_rarrb(list_a, list_b, result.min);
			else
				apply_rrarb(list_a, list_b, result.min);
		}
	}
}

static t_list_m	*ft_sort_list_b(t_list_m **list_a)
{
	t_list_m	*list_b;

	list_b = NULL;
	if (ft_lstsize_m(*list_a) > 3)
		pb(&list_b, list_a);
	if (ft_lstsize_m(*list_a) > 3)
		pb(&list_b, list_a);
	if (ft_lstsize_m(*list_a) > 3)
		ft_sort_b_till_three(list_a, &list_b);
	if (!check_sorted(*list_a))
		ft_sort_three(list_a);
	return (list_b);
}

static void	ft_sort_list_a(t_list_m **list_a, t_list_m **list_b)
{
	int			min_a;
	int			max_a;
	int			mid_a;

	min_a = (*list_a)->n;
	mid_a = ((*list_a)->next)->n;
	max_a = (((*list_a)->next)->next)->n;
	while ((*list_b) && (*list_b)->n > max_a)
		pa(list_a, list_b);
	while ((*list_a)->n != max_a)
		rra(list_a, 1);
	while ((*list_b) && (*list_b)->n > mid_a)
		pa(list_a, list_b);
	while ((*list_a)->n != mid_a)
		rra(list_a, 1);
	while ((*list_b) && (*list_b)->n > min_a)
		pa(list_a, list_b);
	while ((*list_a)->n != min_a)
		rra(list_a, 1);
	while ((*list_b) && (*list_b)->n < min_a)
		pa(list_a, list_b);
}

void	ft_sort(t_list_m **list_a)
{
	t_list_m	*list_b;
	int			i;

	list_b = NULL;
	if (ft_lstsize_m(*list_a) == 2)
		sa(list_a, 1);
	else
	{
		list_b = ft_sort_list_b(list_a);
		if (list_b)
		{
			i = find_index(list_b, ft_max(list_b));
			if (i < ft_lstsize_m(list_b) - i)
				while ((list_b)->n != ft_max(list_b))
					rb(&list_b, 1);
			else
				while ((list_b)->n != ft_max(list_b))
					rrb(&list_b, 1);
			ft_sort_list_a(list_a, &list_b);
		}
	}
}
