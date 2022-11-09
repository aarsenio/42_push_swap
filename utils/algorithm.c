/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarsenio <aarsenio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 21:01:57 by aarsenio          #+#    #+#             */
/*   Updated: 2022/11/09 14:23:02 by aarsenio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	algo_3(void)
{
	if (a()->next->x < a()->next->next->x && a()->next->next->x > \
	a()->next->next->next->x && a()->next->x < a()->next->next->next->x)
	{
		sa();
		ra();
	}
	if (a()->next->x < a()->next->next->x && a()->next->next->x > \
	a()->next->next->next->x && a()->next->x > a()->next->next->next->x)
		rra();
	if (a()->next->x > a()->next->next->x && a()->next->next->x < \
	a()->next->next->next->x && a()->next->x < a()->next->next->next->x)
		sa();
	if (a()->next->x > a()->next->next->x && a()->next->next->x < \
	a()->next->next->next->x && a()->next->x > a()->next->next->next->x)
		ra();
	if (a()->next->x > a()->next->next->x && a()->next->next->x > \
	a()->next->next->next->x && a()->next->x > a()->next->next->next->x)
	{
		ra();
		sa();
	}
}

void	algo_5(void)
{
	while (list_size(a()) > 3)
	{
		if (a()->next->x != minmax(a(), 0))
			ra();
		else
			pb();
	}
	algo_3();
	pa();
	pa();
}
