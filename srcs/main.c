/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <asohrabi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 11:27:50 by asohrabi          #+#    #+#             */
/*   Updated: 2024/04/15 16:14:42 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_list_m	*list;

	if (argc < 2)
		return (0);
	check_args(argv);
	list = parse_args(argc, argv);
	if (!list || check_dup(list))
	{
		ft_free(&list);
		ft_exit();
	}
	if (!check_sorted(list))
		ft_sort(&list);
	ft_free(&list);
	return (0);
}
