/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarsenio <aarsenio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 21:01:57 by aarsenio          #+#    #+#             */
/*   Updated: 2022/11/17 00:22:25 by aarsenio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	algo_3(void)
{
	if (a()->next->n < a()->next->next->n && a()->next->next->n > \
	a()->next->next->next->n && a()->next->n < a()->next->next->next->n)
	{
		sa();
		ra();
	}
	if (a()->next->n < a()->next->next->n && a()->next->next->n > \
	a()->next->next->next->n && a()->next->n > a()->next->next->next->n)
		rra();
	if (a()->next->n > a()->next->next->n && a()->next->next->n < \
	a()->next->next->next->n && a()->next->n < a()->next->next->next->n)
		sa();
	if (a()->next->n > a()->next->next->n && a()->next->next->n < \
	a()->next->next->next->n && a()->next->n > a()->next->next->next->n)
		ra();
	if (a()->next->n > a()->next->next->n && a()->next->next->n > \
	a()->next->next->next->n && a()->next->n > a()->next->next->next->n)
	{
		ra();
		sa();
	}
}

void	algo_5(void)
{
	while (list_size(a()) > 3)
	{
		if (smart_rotation(a(), minmax(a(), 0)))
			while (a()->next->n !=  minmax(a(), 0))
				rra();
		else
			while (a()->next->n !=  minmax(a(), 0))
				ra();
		pb();
	}
	algo_3();
	pa();
	pa();
}
