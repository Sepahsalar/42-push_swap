/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <asohrabi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 16:09:45 by asohrabi          #+#    #+#             */
/*   Updated: 2024/02/21 16:58:12 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	list_args(char **argv, t_list_m **list)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		ft_lstadd_back_m(list, ft_lstnew_m(ft_atoi_m(argv[i])));
		i++;
	}
}

void	ft_free(t_list_m **list)
{
	t_list_m	*temp;

	if (!list)
		return ;
	while (*list)
	{
		temp = (*list)->next;
		(*list)->n = 0;
		free(*list);
		*list = temp;
	}
}

static void	ft_free_str(char **list)
{
	char	*temp;

	if (!list)
		return ;
	while (*list)
	{
		temp = *list;
		list++;
		free(temp);
	}
	*list = NULL;
}

t_list_m	*parse_args(int argc, char **argv)
{
	t_list_m	*list;
	char		**numbers;

	list = NULL;
	if (argc < 2)
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	else if (argc == 2)
	{
		numbers = ft_split(argv[1], ' ');
		list_args(numbers, &list);
		ft_free_str(numbers);
		free(numbers);
	}
	else
		list_args(argv, &list);
	return (list);
}
