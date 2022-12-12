/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarsenio <aarsenio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:17:33 by aarsenio          #+#    #+#             */
/*   Updated: 2022/12/12 15:39:58 by aarsenio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	find_max_bits(void)
{
	int	max;
	int	bits;

	bits = 0;
	max = minmax(a(), 1);
	while (max && ++bits)
		max >>= 1;
	return (bits);
}

void	radix_sort(void)
{
	int		max_bits;
	int		i;
	int		size;
	t_stack	*t;

	max_bits = find_max_bits();
	i = -1;
	while (++i < max_bits)
	{
		size = list_size(a());
		while (size--)
		{
			t = a()->next;
			if ((t->n >> i & 1))
				ra();
			else
				pb();
		}
		while (b()->next)
			pa();
	}
}
