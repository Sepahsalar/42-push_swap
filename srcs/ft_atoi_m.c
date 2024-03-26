/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_m.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <asohrabi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 16:48:05 by asohrabi          #+#    #+#             */
/*   Updated: 2024/03/26 10:53:30 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	ft_putnum_m(const char *str, int sign, int i)
{
	long	a;

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
	if ((sign * a) > 2147483647 || (sign * a) < -2147483648)
		ft_exit();
	return (sign * (int)a);
}

int	ft_atoi_m(const char *str)
{
	int	sign;
	int	i;

	i = 0;
	while ((str[i] == '\t') || (str[i] == '\n') || (str[i] == '\v')
		|| (str[i] == '\f') || (str[i] == '\r') || (str[i] == ' '))
		i++;
	sign = 1;
	return (ft_putnum_m(str, sign, i));
}
