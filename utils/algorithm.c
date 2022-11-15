/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarsenio <aarsenio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 21:01:57 by aarsenio          #+#    #+#             */
/*   Updated: 2022/11/15 21:47:59 by aarsenio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	algo_3(void)
{
	if (a()->next->i < a()->next->next->i && a()->next->next->i > \
	a()->next->next->next->i && a()->next->i < a()->next->next->next->i)
	{
		sa();
		ra();
	}
	if (a()->next->i < a()->next->next->i && a()->next->next->i > \
	a()->next->next->next->i && a()->next->i > a()->next->next->next->i)
		rra();
	if (a()->next->i > a()->next->next->i && a()->next->next->i < \
	a()->next->next->next->i && a()->next->i < a()->next->next->next->i)
		sa();
	if (a()->next->i > a()->next->next->i && a()->next->next->i < \
	a()->next->next->next->i && a()->next->i > a()->next->next->next->i)
		ra();
	if (a()->next->i > a()->next->next->i && a()->next->next->i > \
	a()->next->next->next->i && a()->next->i > a()->next->next->next->i)
	{
		ra();
		sa();
	}
}

void	algo_5(void)
{
	while (list_size(a()) > 3)
	{
		if (a()->next->i != minmax(a(), 0))
			ra();
		else
			pb();
	}
	algo_3();
	pa();
	pa();
}
