/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <asohrabi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:23:57 by asohrabi          #+#    #+#             */
/*   Updated: 2024/04/12 15:35:23 by asohrabi         ###   ########.fr       */
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
	t_list_m	*last;
	int			max_n;
	int			min_n;
	t_list_m	*temp;

	max_n = INT_MAX;
	min_n = INT_MIN;
	temp = list_a;
	i = ft_lstsize_m(list_a) + 1; //before it was 1
	if (!list_a)
		return (0);
	if (nbr > ft_max(list_a) || nbr < ft_min(list_a))
		return (find_index(list_a, ft_min(list_a)));
	while (temp)
	{
		if (temp->n > nbr && temp->n < max_n)
			max_n = temp->n;
		if (temp->n < nbr && temp->n > min_n)
			min_n = temp->n;
		temp = temp->next;
	}
	temp = list_a;
	last = ft_lstlast_m(list_a);
	while (temp && !((temp->n == min_n && ft_lstlast_m(list_a)->n == max_n)
			|| (temp->n == max_n && ft_lstlast_m(list_a)->n == min_n)))
	{
		last = temp;
		temp = temp->next;
		i--;
	}
	return (i);
}
