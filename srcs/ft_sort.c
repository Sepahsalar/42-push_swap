/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <asohrabi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:23:44 by asohrabi          #+#    #+#             */
/*   Updated: 2024/04/11 20:11:10 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <stdio.h>

static void	ft_stack_printer(t_list_m *stack_a, t_list_m *stack_b)
{
	t_list_m	*temp_a;
	t_list_m	*temp_b;

	temp_a = stack_a;
	temp_b = stack_b;
	printf("\nStack A\t\t\t\tStack B\n");
	while (temp_a || temp_b)
	{
		if (temp_a)
		{
			printf("%d\t\t\t\t", (temp_a)->n);
			temp_a = (temp_a)->next;
		}
		else
			printf("-\t\t\t\t");
		if (temp_b)
		{
			printf("%d\n", (temp_b)->n);
			temp_b = (temp_b)->next;
		}
		else
			printf("-\n");
	}
	printf("\n");
}

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
	t_min		result;

	result = cal_push_ab(*list_a, *list_b);
	// while (ft_lstsize_m(*list_a) > 3 && !check_sorted(*list_a) && result.move >= 0)
	while (ft_lstsize_m(*list_a) > 3 && result.move >= 0)
	{
		result = cal_push_ab(*list_a, *list_b);
		if (result.move == 0)
			pb(list_b, list_a);
		else
		{
			if (result.s == 1)
				apply_rrr(list_a, list_b, result.min, 'a');
			else if (result.s == 2)
				apply_rr(list_a, list_b, result.min, 'a');
			else if (result.s == 3)
				apply_rarrb(list_a, list_b, result.min, 'a');
			else
				apply_rrarb(list_a, list_b, result.min, 'a');
		}
	}
}

static t_list_m	*ft_sort_list_b(t_list_m **list_a)
{
	t_list_m	*list_b;

	list_b = NULL;
	if (ft_lstsize_m(*list_a) > 3)
	{
		pb(&list_b, list_a);
		// ft_stack_printer(*list_a, list_b);
	}
	if (ft_lstsize_m(*list_a) > 3)
	{
		pb(&list_b, list_a);
		// ft_stack_printer(*list_a, list_b);
	}
	// if (ft_lstsize_m(*list_a) > 3 && !check_sorted(*list_a))
	if (ft_lstsize_m(*list_a) > 3)
		ft_sort_b_till_three(list_a, &list_b);
	if (!check_sorted(*list_a))
	{
		ft_sort_three(list_a);
		// ft_stack_printer(*list_a, list_b);
	}
	return (list_b);
}

// static t_list_m	**ft_sort_list_a(t_list_m **list_a, t_list_m **list_b)
// {
// 	t_min	result;

// 	result = cal_push_ba(*list_a, *list_b);
// 	while (result.move >= 0 && *list_b)
// 	{
// 		result = cal_push_ba(*list_a, *list_b);
// 		if (result.move == 0)
// 			pa(list_a, list_b);
// 		else
// 		{
// 			if (result.s == 1)
// 				apply_rrr(list_a, list_b, result.min, 'b');
// 			else if (result.s == 2)
// 				apply_rr(list_a, list_b, result.min, 'b');
// 			else if (result.s == 3)
// 				apply_rarrb(list_a, list_b, result.min, 'b');
// 			else
// 				apply_rrarb(list_a, list_b, result.min, 'b');
// 		}
// 	}
// 	return (list_a);
// }

void	ft_sort(t_list_m **list_a)
{
	t_list_m	*list_b;
	int			min_a;
	int			max_a;
	int			mid_a;
	int			i_b;
	// int			i;

	// list_b = NULL;
	if (ft_lstsize_m(*list_a) == 2)
		sa(list_a, 1);
	else
	{
		list_b = ft_sort_list_b(list_a);
		if (list_b)
		{
			if (list_b && find_index(list_b, ft_max(list_b)) > ft_lstsize_m(list_b) / 2)
				i_b = 0;
			else
				i_b = 1;
			while (list_b && list_b->n != ft_max(list_b))
			{
				if (i_b == 0)
					rrb(&list_b, 1);
				else
					rb(&list_b, 1);
			}
			min_a = (*list_a)->n;
			mid_a = ((*list_a)->next)->n;
			max_a = (((*list_a)->next)->next)->n;
			// if (list_b && list_b->n > max_a)
			// {
				while (list_b && list_b->n > max_a)
					pa(list_a, &list_b);
				// ft_stack_printer(*list_a, list_b);
				while (list_a && (*list_a)->n != max_a)
				    rra(list_a, 1);
				// ft_stack_printer(*list_a, list_b);
				// rra(list_a, 1);
			// }
			// if (list_b && list_b->n > mid_a)
			// {
				//rra(list_a, 1);
				while (list_b && list_b->n > mid_a)
					pa(list_a, &list_b);
				// ft_stack_printer(*list_a, list_b);
				while (list_a && (*list_a)->n != mid_a)
					rra(list_a, 1);
				// ft_stack_printer(*list_a, list_b);
			// }
			// if (list_b && list_b->n > min_a)
			// {
				// rra(list_a, 1);
				while (list_b && list_b->n > min_a)
					pa(list_a, &list_b);
				// ft_stack_printer(*list_a, list_b);
				while (list_a && (*list_a)->n != min_a)
					rra(list_a, 1);
				// ft_stack_printer(*list_a, list_b);
			// }
			// if (list_b && list_b->n < min_a)
			// {
				// rra(list_a, 1);
				while (list_b && list_b->n < min_a)
					pa(list_a, &list_b);
				ft_stack_printer(*list_a, list_b);
			// }
		}
		// ft_stack_printer(*list_a, list_b);
		// list_a = ft_sort_list_a(list_a, &list_b);
		// i = find_index(*list_a, ft_min(*list_a));
		// if (i < ft_lstsize_m(*list_a) - i)
		// {
		// 	while ((*list_a)->n != ft_min(*list_a))
		// 	{
		// 		ra(list_a, 1);
		// 		ft_stack_printer(*list_a, list_b);
		// 	}
		// }
		// else
		// {
		// 	while ((*list_a)->n != ft_min(*list_a))
		// 	{
		// 		rra(list_a, 1);
		// 		ft_stack_printer(*list_a, list_b);
		// 	}
		// }
	}
}
