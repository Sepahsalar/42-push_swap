/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <asohrabi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:23:57 by asohrabi          #+#    #+#             */
/*   Updated: 2024/04/11 18:45:44 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_min(t_list_m *list)
{
	int			min;
	t_list_m	*temp;

	temp = list;
	min = temp->n;
	while (temp)
	{
		if (temp->n < min)
			min = temp->n;
		temp = temp->next;
	}
	return (min);
}

int	ft_max(t_list_m *list)
{
	int			max;
	t_list_m	*temp;

	// if (!list)
	// 	return (0);
	temp = list;
	max = temp->n;
	while (temp)
	{
		if (temp->n > max)
			max = temp->n;
		temp = temp->next;
	}
	return (max);
}

int	find_index(t_list_m *list, int nbr)
{
	int			index;
	t_list_m	*temp;

	index = 0;
	temp = list;
	while (temp && temp->n != nbr)
	{
		index++;
		temp = temp->next;
	}
	return (index);
}

int	cal_insert_index_b(t_list_m *list_b, int nbr)
{
	int			i;
	t_list_m	*last;
	int			max_n;
	int			min_n;
	t_list_m	*temp;

	max_n = INT_MAX;
	min_n = INT_MIN;
	temp = list_b;
	if (!list_b)
		return (0);
	if (nbr > ft_max(list_b) || nbr < ft_min(list_b))
		return (find_index(list_b, ft_max(list_b)));
	while (temp)
	{
		if (temp->n > nbr && temp->n < max_n)
			max_n = temp->n;
		if (temp->n < nbr && temp->n > min_n)
			min_n = temp->n;
		temp = temp->next;
	}
	i = 0; //before it was 1
	temp = list_b;
	last = ft_lstlast_m(list_b);
	while (temp && !((temp->n == min_n && ft_lstlast_m(list_b)->n == max_n)
			|| (temp->n == max_n && ft_lstlast_m(list_b)->n == min_n)))
	{
		last = temp;
		temp = temp->next;
		i++;
	}
	return (i);
}

int	cal_insert_index_a(t_list_m *list_a, int nbr)
{
	int			i;
	t_list_m	*temp;

	i = 1; //before it was 1
	if (!list_a)
		return (0);
	if (nbr > ft_max(list_a) || nbr < ft_min(list_a))
		i = find_index(list_a, ft_min(list_a));
	// else if (nbr < list_a->n && nbr > ft_lstlast_m(list_a)->n)
	// 	i = 0;
	else
	{
		temp = list_a->next;
		while (list_a && (list_a->n > nbr || (temp && temp->n < nbr)))
		// while ((nbr < list_a->n || nbr > ft_lstlast_m(list_a)->n)
		// 	&& (nbr > list_a->n || nbr < ft_lstlast_m(list_a)->n))
		{
			list_a = list_a->next;
			if (list_a)
				temp = list_a->next;
			i++;
		}
	}
	return (i);
}
