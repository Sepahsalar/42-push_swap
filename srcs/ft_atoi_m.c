/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_m.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <asohrabi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 16:48:05 by asohrabi          #+#    #+#             */
/*   Updated: 2024/04/15 15:41:36 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_atoi_m(const char *str)
{
	int		sign;
	int		i;
	long	a;

	i = 0;
	sign = 1;
	a = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			ft_exit();
		a = a * 10 + (str[i] - '0');
		i++;
	}
	if ((sign * a) > INT_MAX || (sign * a) < INT_MIN)
		ft_exit();
	return (sign * (int)a);
}
