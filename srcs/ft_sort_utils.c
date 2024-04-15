/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <asohrabi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:23:57 by asohrabi          #+#    #+#             */
/*   Updated: 2024/04/15 16:14:48 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_exit(void)
{
	ft_putendl_fd("Error", STDERR_FILENO);
	exit(EXIT_FAILURE);
}

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

int	cal_insert_index(t_list_m *list_b, int nbr)
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
