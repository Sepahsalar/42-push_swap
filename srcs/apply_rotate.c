/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <asohrabi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:53:45 by asohrabi          #+#    #+#             */
/*   Updated: 2024/04/11 20:12:23 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <stdio.h>
//check with these numbers : 2 3 0 -90 -9 -7 -8 -12
// static void	ft_stack_printer(t_list_m *stack_a, t_list_m *stack_b)
// {
// 	t_list_m	*temp_a;
// 	t_list_m	*temp_b;

// 	temp_a = stack_a;
// 	temp_b = stack_b;
// 	printf("\nStack A\t\t\t\tStack B\n");
// 	while (temp_a || temp_b)
// 	{
// 		if (temp_a)
// 		{
// 			printf("%d\t\t\t\t", (temp_a)->n);
// 			temp_a = (temp_a)->next;
// 		}
// 		else
// 			printf("-\t\t\t\t");
// 		if (temp_b)
// 		{
// 			printf("%d\n", (temp_b)->n);
// 			temp_b = (temp_b)->next;
// 		}
// 		else
// 			printf("-\n");
// 	}
// 	printf("\n");
// }

void	apply_rrr(t_list_m **list_a, t_list_m **list_b, int nbr, char c)
{
	int	i_rra;
	int	i_rrb;
	int	i_rrr;
	// if (!list_a || !list_b)
	// 	return ;
	if (c == 'a')
	{
		// while (ft_lstsize_m(*list_a) > 3 && !check_sorted(*list_a))
		while (ft_lstsize_m(*list_a) > 3)
		{
			i_rrr = 0;
			i_rrb = 0;
			i_rra = 0;
			if (cal_insert_index_b(*list_b, nbr) && ft_lstsize_m(*list_b) != 1)
				i_rrb = ft_lstsize_m(*list_b) - cal_insert_index_b(*list_b, nbr);
			if (find_index(*list_a, nbr))
				i_rra = ft_lstsize_m(*list_a) - find_index(*list_a, nbr);
			if (i_rra >= i_rrb)
			{
				i_rra = i_rra - i_rrb;
				i_rrr = i_rrb;
				i_rrb = 0;
			}
			else
			{
				i_rrb = i_rrb - i_rra;
				i_rrr = i_rra;
				i_rra = 0;
			}
			while (i_rrr)
			{
				rrr(list_a, list_b);
				// ft_stack_printer(*list_a, *list_b);
				i_rrr--;
			}
			while (i_rra)
			{
				rra(list_a, 1);
				// ft_stack_printer(*list_a, *list_b);
				i_rra--;
			}
			while (i_rrb)
			{
				rrb(list_b, 1);
				// ft_stack_printer(*list_a, *list_b);
				i_rrb--;
			}
			pb(list_b, list_a);
			// ft_stack_printer(*list_a, *list_b);
		}
	}
	else if (c == 'b' && *list_b)
	{
		i_rrr = 0;
		i_rrb = 0;
		i_rra = 0;
		if (cal_insert_index_a(*list_a, nbr))
			i_rra = ft_lstsize_m(*list_a) - cal_insert_index_a(*list_a, nbr);
		if (find_index(*list_b, nbr) && ft_lstsize_m(*list_b) != 1)
			i_rrb = ft_lstsize_m(*list_b) - find_index(*list_b, nbr);
		if (i_rra >= i_rrb)
		{
			i_rra = i_rra - i_rrb;
			i_rrr = i_rrb;
			i_rrb = 0;
		}
		else
		{
			i_rrb = i_rrb - i_rra;
			i_rrr = i_rra;
			i_rra = 0;
		}
		while (i_rrr)
		{
			rrr(list_a, list_b);
			// ft_stack_printer(*list_a, *list_b);
			i_rrr--;
		}
		while (i_rra)
		{
			rra(list_a, 1);
			// ft_stack_printer(*list_a, *list_b);
			i_rra--;
		}
		while (i_rrb)
		{
			rrb(list_b, 1);
			// ft_stack_printer(*list_a, *list_b);
			i_rrb--;
		}
		if (*list_b)
		{
			pa(list_a, list_b);
			// ft_stack_printer(*list_a, *list_b);
		}
	}
}

void	apply_rr(t_list_m **list_a, t_list_m **list_b, int nbr, char c)
{
	int	i_ra;
	int	i_rb;
	int	i_rr;
	// if (!list_a || !list_b)
	// 	return ;
	if (c == 'a')
	{
		while (ft_lstsize_m(*list_a) > 3)
		{
			i_rb = cal_insert_index_b(*list_b, nbr);
			i_ra = find_index(*list_a, nbr);
			if (i_ra >= i_rb)
			{
				i_ra = i_ra - i_rb;
				i_rr = i_rb;
				i_rb = 0;
			}
			else
			{
				i_rb = i_rb - i_ra;
				i_rr = i_ra;
				i_ra = 0;
			}
			while (i_rr)
			{
				rr(list_a, list_b);
				// ft_stack_printer(*list_a, *list_b);
				i_rr--;
			}
			while (i_ra)
			{
				ra(list_a, 1);
				// ft_stack_printer(*list_a, *list_b);
				i_ra--;
			}
			while (i_rb)
			{
				rb(list_b, 1);
				// ft_stack_printer(*list_a, *list_b);
				i_rb--;
			}
			pb(list_b, list_a);
			// ft_stack_printer(*list_a, *list_b);
		}
	}
	else if (c == 'b' && *list_b)
	{
		i_ra = cal_insert_index_a(*list_a, nbr);
		i_rb = find_index(*list_b, nbr);
		if (i_ra >= i_rb)
		{
			i_ra = i_ra - i_rb;
			i_rr = i_rb;
			i_rb = 0;
		}
		else
		{
			i_rb = i_rb - i_ra;
			i_rr = i_ra;
			i_ra = 0;
		}
		while (i_rr)
		{
			rr(list_a, list_b);
			// ft_stack_printer(*list_a, *list_b);
			i_rr--;
		}
		while (i_ra)
		{
			ra(list_a, 1);
			// ft_stack_printer(*list_a, *list_b);
			i_ra--;
		}
		while (i_rb)
		{
			rb(list_b, 1);
			// ft_stack_printer(*list_a, *list_b);
			i_rb--;
		}
		if (*list_b)
		{
			pa(list_a, list_b);
			// ft_stack_printer(*list_a, *list_b);
		}
	}
}

void	apply_rarrb(t_list_m **list_a, t_list_m **list_b, int nbr, char c)
{
	int	i_ra;
	int	i_rrb;

	if (c == 'a')
	{
		while (ft_lstsize_m(*list_a) > 3)
		{
			i_rrb = 0;
			if (cal_insert_index_b(*list_b, nbr) && ft_lstsize_m(*list_b) != 1)
				i_rrb = ft_lstsize_m(*list_b) - cal_insert_index_b(*list_b, nbr);
			i_ra = find_index(*list_a, nbr);
			while (i_ra)
			{
				ra(list_a, 1);
				// ft_stack_printer(*list_a, *list_b);
				i_ra--;
			}
			while (i_rrb)
			{
				rrb(list_b, 1);
				// ft_stack_printer(*list_a, *list_b);
				i_rrb--;
			}
			pb(list_b, list_a);
			// ft_stack_printer(*list_a, *list_b);
		}
	}
	else if (c == 'b' && *list_b)
	{
		i_rrb = 0;
		if (find_index(*list_b, nbr) && ft_lstsize_m(*list_b) != 1)
			i_rrb = ft_lstsize_m(*list_b) - find_index(*list_b, nbr);
		i_ra = cal_insert_index_a(*list_a, nbr);
		while (i_ra)
		{
			ra(list_a, 1);
			// ft_stack_printer(*list_a, *list_b);
			i_ra--;
		}
		while (i_rrb)
		{
			rrb(list_b, 1);
			// ft_stack_printer(*list_a, *list_b);
			i_rrb--;
		}
		if (*list_b)
		{
			pa(list_a, list_b);
			// ft_stack_printer(*list_a, *list_b);
		}
	}
}

void	apply_rrarb(t_list_m **list_a, t_list_m **list_b, int nbr, char c)
{
	int	i_rra;
	int	i_rb;

	if (c == 'a')
	{
		while (ft_lstsize_m(*list_a) > 3)
		{
			i_rra = ft_lstsize_m(*list_a) - find_index(*list_a, nbr);
			i_rb = cal_insert_index_b(*list_b, nbr);
			while (i_rra)
			{
				rra(list_a, 1);
				// ft_stack_printer(*list_a, *list_b);
				i_rra--;
			}
			while (i_rb)
			{
				rb(list_b, 1);
				// ft_stack_printer(*list_a, *list_b);
				i_rb--;
			}
			pb(list_b, list_a);
			// ft_stack_printer(*list_a, *list_b);
		}
	}
	else if (c == 'b' && *list_b)
	{
		i_rra = ft_lstsize_m(*list_a) - cal_insert_index_a(*list_a, nbr);
		i_rb = find_index(*list_b, nbr);
		while (i_rra)
		{
			rra(list_a, 1);
			// ft_stack_printer(*list_a, *list_b);
			i_rra--;
		}
		while (i_rb)
		{
			rb(list_b, 1);
			// ft_stack_printer(*list_a, *list_b);
			i_rb--;
		}
		if (*list_b)
		{
			pa(list_a, list_b);
			// ft_stack_printer(*list_a, *list_b);
		}
	}
}
