/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <asohrabi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:50:55 by asohrabi          #+#    #+#             */
/*   Updated: 2024/02/22 16:35:54 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_sorted(t_list_m *list)
{
	int	nbr;

	nbr = list->n;
	if (!list)
		return (1);
	while (list->next)
	{
		if (nbr > (list->next)->n)
			return (0);
		nbr = (list->next)->n;
		list = list->next;
	}
	return (1);
}

int	check_dup(t_list_m *list)
{
	t_list_m	*temp;

	while (list)
	{
		temp = list->next;
		while (temp)
		{
			if (list->n == temp->n)
				return (1);
			temp = temp->next;
		}
		list = list->next;
	}
	return (0);
}

static void	check_alpha(char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (!(argv[i][j] == '+' || argv[i][j] == '-' || argv[i][j] == ' '
				|| ft_isdigit(argv[i][j])))
			{
				ft_putendl_fd("Error", 2);
				exit(1);
			}
			j++;
		}
		i++;
	}
}

static int	check_digit_error(char **argv, int i, int j)
{
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] == '+' || argv[i][j] == '-')
			{
				j++;
				if (!ft_isdigit(argv[i][j]))
					return (0);
			}
			else if (ft_isdigit(argv[i][j]))
			{
				j++;
				if (!argv[i][j])
					break ;
				if (!(ft_isdigit(argv[i][j]) || (argv[i][j] == ' ')))
					return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

void	check_args(char **argv)
{
	check_alpha(argv);
	if (!check_digit_error(argv, 1, 0))
	{
		ft_putendl_fd("Error", 2);
		exit(1);
	}
}
