/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <asohrabi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:42:44 by asohrabi          #+#    #+#             */
/*   Updated: 2024/04/15 16:39:48 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	max_size;

	max_size = SIZE_MAX;
	if (count == 0 || size == 0)
		return (ft_calloc(1, 1));
	if (count != 0 && max_size / count < size)
		return ((void *)0);
	p = (void *)malloc(count * size * sizeof(void));
	if (!p)
		return ((void *)0);
	ft_bzero(p, count * size);
	return (p);
}
