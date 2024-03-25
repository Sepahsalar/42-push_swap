/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <asohrabi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:23:57 by asohrabi          #+#    #+#             */
/*   Updated: 2024/02/23 14:40:38 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_min(t_list_m *list)
{
	int		min;

	min = list->n;
	while (list)
	{
		if (list->n < min)
			min = list->n;
		list = list->next;
	}
	return (min);
}

int	ft_max(t_list_m *list)
{
	int		max;

	// if (!list)
	// 	return (0);
	max = list->n;
	while (list)
	{
		if (list->n > max)
			max = list->n;
		list = list->next;
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
	t_list_m	*temp;

	i = 1;
	if (!list_b)
		return (0);
	if (nbr > ft_max(list_b) || nbr < ft_min(list_b))
		i = find_index(list_b, ft_max(list_b));
	else if (nbr > list_b->n && nbr < ft_lstlast_m(list_b)->n)
		i = 0;
	else
	{
		temp = list_b->next;
		while (list_b && (list_b->n < nbr || (temp && temp->n > nbr)))
		{
			list_b = list_b->next;
			if (list_b)
				temp = list_b->next;
			i++;
		}
	}
	return (i);
}

int	cal_insert_index_a(t_list_m *list_a, int nbr)
{
	int			i;
	t_list_m	*temp;

	i = 1;
	if (!list_a)
		return (0);
	if (nbr > ft_max(list_a) || nbr < ft_min(list_a))
		i = find_index(list_a, ft_min(list_a));
	else if (nbr < list_a->n && nbr > ft_lstlast_m(list_a)->n)
		i = 0;
	else
	{
		temp = list_a->next;
		while (list_a && (list_a->n > nbr || (temp && temp->n < nbr)))
		{
			list_a = list_a->next;
			if (list_a) //maybe delete this
				temp = list_a->next;
			i++;
		}
	}
	return (i);
}
