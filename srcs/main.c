/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <asohrabi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 11:27:50 by asohrabi          #+#    #+#             */
/*   Updated: 2024/03/25 13:16:52 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_list_m	*list;

	check_args(argv);
	list = parse_args(argc, argv);
	if (!list || check_dup(list))
	{
		ft_free(&list);
		ft_putendl_fd("Error", 2);
		exit(EXIT_FAILURE);
	}
	if (!check_sorted(list))
		ft_sort(&list);
	ft_free(&list);
	return (0);
}
