/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <asohrabi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:23:44 by asohrabi          #+#    #+#             */
/*   Updated: 2024/04/10 18:25:40 by asohrabi         ###   ########.fr       */
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
	t_list_m	*temp;
	int			i;

	while (ft_lstsize_m(*list_a) > 3 && !check_sorted(*list_a)) //maybe delete 
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
			// if (*list_a)
			// {
			// 	temp = *list_a;
			// if (temp->next)
			temp = temp->next;
			// }
			// else
			// 	break ;
		}
	}
}

static t_list_m	*ft_sort_list_b(t_list_m **list_a)
{
	t_list_m	*list_b;

	list_b = NULL;
	if (ft_lstsize_m(*list_a) > 3 && !check_sorted(*list_a))
	{
		pb(&list_b, list_a);
		ft_stack_printer(*list_a, list_b);
	}
	if (ft_lstsize_m(*list_a) > 3 && !check_sorted(*list_a))
	{
		pb(&list_b, list_a);
		ft_stack_printer(*list_a, list_b);
	}
	if (ft_lstsize_m(*list_a) > 3 && !check_sorted(*list_a))
		ft_sort_b_till_three(list_a, &list_b);
	if (!check_sorted(*list_a))
	{
		ft_sort_three(list_a);
		ft_stack_printer(*list_a, list_b);
	}
	return (list_b);
}

static t_list_m	**ft_sort_list_a(t_list_m **list_a, t_list_m **list_b)
{
	t_list_m	*temp;
	int			i;

	temp = *list_b;
	i = cal_push_ba(*list_a, *list_b);
	while (i >= 0 && temp)
	{
		printf("Hi\n");
		if (i == cal_rrr_ba(*list_a, *list_b, temp->n))
		{
			printf("rrr is applying\n");
			apply_rrr(list_a, list_b, temp->n, 'b');
		}
		else if (i == cal_rr_ba(*list_a, *list_b, temp->n))
		{
			printf("rr is applying\n");
			apply_rr(list_a, list_b, temp->n, 'b');
		}
		else if (i == cal_rarrb_ba(*list_a, *list_b, temp->n))
		{
			printf("rarrb is applying\n");
			apply_rarrb(list_a, list_b, temp->n, 'b');
		}
		else if (i == cal_rrarb_ba(*list_a, *list_b, temp->n))
		{
			printf("rrarb is applying\n");
			apply_rrarb(list_a, list_b, temp->n, 'b');
		}
		printf("Bye\n");
		// if (*list_b)
		// {
		// 	temp = *list_b;
		// printf("temp is %d\n", temp->n);
		// if (temp->next)
		temp = temp->next;
		// }
		// else
		// 	break ;
	}
	return (list_a);
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
		list_a = ft_sort_list_a(list_a, &list_b);
		i = find_index(*list_a, ft_min(*list_a));
		printf("index = %d\n", i);
		printf("(*list_a)->n = %d\n", (*list_a)->n);
		printf("min(*list_a) = %d\n", ft_min(*list_a));
		if (i < ft_lstsize_m(*list_a) - i)
		{
			while ((*list_a)->n != ft_min(*list_a))
			{
				ra(list_a, 1);
				ft_stack_printer(*list_a, list_b);
			}
		}
		else
		{
			while ((*list_a)->n != ft_min(*list_a))
			{
				rra(list_a, 1);
				ft_stack_printer(*list_a, list_b);
			}
		}
	}
}
