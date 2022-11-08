/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarsenio <aarsenio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 21:01:57 by aarsenio          #+#    #+#             */
/*   Updated: 2022/11/08 21:36:59 by aarsenio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	algo3(void)
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
