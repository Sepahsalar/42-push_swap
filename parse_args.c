/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <asohrabi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 16:09:45 by asohrabi          #+#    #+#             */
/*   Updated: 2023/12/01 18:20:50 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	list_args(char **argv, t_list **list)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		ft_lstadd_back(list, ft_lstnew(ft_atoi(argv[i])));
		i++;
	}
}

void	ft_free(t_list **list)
{
	t_list	*temp;

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

t_list	*parse_args(int argc, char **argv)
{
	t_list	*list;
	char	**numbers;

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
