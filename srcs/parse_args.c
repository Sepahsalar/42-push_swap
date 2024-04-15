/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <asohrabi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 16:09:45 by asohrabi          #+#    #+#             */
/*   Updated: 2024/04/15 17:56:31 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	list_args(char **str, t_list_m **list)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_lstadd_back_m(list, ft_lstnew_m(ft_atoi_m(str[i])));
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

static void	ft_free_str_m(char **list)
{
	int	i;

	i = 0;
	if (!list)
		return ;
	while (list[i])
	{
		free(list[i]);
		i++;
	}
	*list = NULL;
	free(list);
}

t_list_m	*parse_args(int argc, char **argv)
{
	t_list_m	*list;
	char		**numbers;

	list = NULL;
	if (argc == 2)
	{
		numbers = ft_split(argv[1], ' ');
		if (!numbers)
			ft_exit();
		list_args(numbers, &list);
		ft_free_str_m(numbers);
	}
	else
		list_args(argv + 1, &list);
	return (list);
}
