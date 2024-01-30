/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <asohrabi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 11:27:50 by asohrabi          #+#    #+#             */
/*   Updated: 2024/01/30 10:41:30 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*list;

	check_args(argv);
	list = parse_args(argc, argv);
	if (!list || check_dup(list))
	{
		ft_free(&list);
		write(2, "Error\n", 6);
		exit(1);
	}
	if (!check_sorted(list))
		ft_sort(&list);
	ft_free(&list);
	return (0);
}
