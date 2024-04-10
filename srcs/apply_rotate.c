/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <asohrabi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:53:45 by asohrabi          #+#    #+#             */
/*   Updated: 2024/04/10 12:14:13 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
//maybe I should add the case if the size of list became less then 3, break ;
//check with these numbers : 2 3 0 -90 -9 -7 -8 -12
#include <stdio.h>

static void	ft_stack_printer(t_list_m *stack_a, t_list_m *stack_b)
{
	printf("\nStack A\t\t\t\tStack B\n");
	while (stack_a || stack_b)
	{
		if (stack_a)
		{
			printf("%d\t\t\t\t", (stack_a)->n);
			stack_a = (stack_a)->next;
		}
		else
			printf("-\t\t\t\t");
		if (stack_b)
		{
			printf("%d\n", (stack_b)->n);
			stack_b = (stack_b)->next;
		}
		else
			printf("-\n");
	}
	printf("\n");
}

void	apply_rrr(t_list_m **list_a, t_list_m **list_b, int nbr, char c)
{
	// if (!list_a || !list_b)
	// 	return ;
	if (c == 'a')
	{
		while (ft_lstsize_m(*list_a) > 3 && !check_sorted(*list_a))
		{
			if ((*list_a)->n != nbr && cal_insert_index_b(*list_b, nbr) > 0)
			{
				rrr(list_a, list_b);
				ft_stack_printer(*list_a, *list_b);
			}
			if ((*list_a)->n != nbr)
			{
				rra(list_a, 1);
				ft_stack_printer(*list_a, *list_b);
			}
			if (cal_insert_index_b(*list_b, nbr) > 0)
			{
				rrb(list_b, 1);
				ft_stack_printer(*list_a, *list_b);
			}
			pb(list_b, list_a);
			ft_stack_printer(*list_a, *list_b);
		}
	}
	else if (c == 'b' && *list_b)
	{
		if ((*list_b)->n != nbr && cal_insert_index_a(*list_a, nbr) > 0)
		{
			rrr(list_a, list_b);
			ft_stack_printer(*list_a, *list_b);
		}
		if (*list_b && (*list_b)->n != nbr)
		{
			rrb(list_b, 1);
			ft_stack_printer(*list_a, *list_b);
		}
		if (cal_insert_index_a(*list_a, nbr) > 0)
		{
			rra(list_a, 1);
			ft_stack_printer(*list_a, *list_b);
		}
		if (*list_b != NULL)
		{
			pa(list_a, list_b);
			ft_stack_printer(*list_a, *list_b);
		}
	}
}

void	apply_rr(t_list_m **list_a, t_list_m **list_b, int nbr, char c)
{
	// if (!list_a || !list_b)
	// 	return ;
	if (c == 'a')
	{
		while (ft_lstsize_m(*list_a) > 3 && !check_sorted(*list_a))
		{
			if ((*list_a)->n != nbr && cal_insert_index_b(*list_b, nbr) > 0)
			{
				rr(list_a, list_b);
				ft_stack_printer(*list_a, *list_b);
			}
			if ((*list_a)->n != nbr)
			{
				ra(list_a, 1);
				ft_stack_printer(*list_a, *list_b);
			}
			if (cal_insert_index_b(*list_b, nbr) > 0)
			{
				rb(list_b, 1);
				ft_stack_printer(*list_a, *list_b);
			}
			pb(list_b, list_a);
			ft_stack_printer(*list_a, *list_b);
		}
	}
	else if (c == 'b' && *list_b)
	{
		if ((*list_b)->n != nbr && cal_insert_index_a(*list_a, nbr) > 0)
		{
			rr(list_a, list_b);
			ft_stack_printer(*list_a, *list_b);
		}
		if (*list_b && (*list_b)->n != nbr)
		{
			rb(list_b, 1);
			ft_stack_printer(*list_a, *list_b);
		}
		if (cal_insert_index_a(*list_a, nbr) > 0)
		{
			ra(list_a, 1);
			ft_stack_printer(*list_a, *list_b);
		}
		if (*list_b != NULL)
		{
			pa(list_a, list_b);
			ft_stack_printer(*list_a, *list_b);
		}
	}
}

void	apply_rarrb(t_list_m **list_a, t_list_m **list_b, int nbr, char c)
{
	if (c == 'a')
	{
		while (ft_lstsize_m(*list_a) > 3 && !check_sorted(*list_a))
		{
			if ((*list_a)->n != nbr)
			{
				ra(list_a, 1);
				ft_stack_printer(*list_a, *list_b);
			}
			if (cal_insert_index_b(*list_b, nbr) > 0)
			{
				rrb(list_b, 1);
				ft_stack_printer(*list_a, *list_b);
			}
			pb(list_b, list_a);
			ft_stack_printer(*list_a, *list_b);
		}
	}
	else if (c == 'b' && *list_b)
	{
		if (cal_insert_index_a(*list_a, nbr) > 0)
		{
			ra(list_a, 1);
			ft_stack_printer(*list_a, *list_b);
		}
		if (*list_b && (*list_b)->n != nbr)
		{
			rrb(list_b, 1);
			ft_stack_printer(*list_a, *list_b);
		}
		if (*list_b != NULL)
		{
			pa(list_a, list_b);
			ft_stack_printer(*list_a, *list_b);
		}
	}
}

void	apply_rrarb(t_list_m **list_a, t_list_m **list_b, int nbr, char c)
{
	if (c == 'a')
	{
		while (ft_lstsize_m(*list_a) > 3 && !check_sorted(*list_a))
		{
			if ((*list_a)->n != nbr)
			{
				rra(list_a, 1);
				ft_stack_printer(*list_a, *list_b);
			}
			if (cal_insert_index_b(*list_b, nbr) > 0)
			{
				rb(list_b, 1);
				ft_stack_printer(*list_a, *list_b);
			}
			pb(list_b, list_a);
			ft_stack_printer(*list_a, *list_b);
		}
	}
	else if (c == 'b' && *list_b)
	{
		if (cal_insert_index_a(*list_a, nbr) > 0)
		{
			rra(list_a, 1);
			ft_stack_printer(*list_a, *list_b);
		}
		if (*list_b && (*list_b)->n != nbr)
		{
			rb(list_b, 1);
			ft_stack_printer(*list_a, *list_b);
		}
		if (*list_b != NULL)
		{
			pa(list_a, list_b);
			ft_stack_printer(*list_a, *list_b);
		}
	}
}
