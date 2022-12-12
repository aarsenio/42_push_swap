/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarsenio <aarsenio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:27:47 by aarsenio          #+#    #+#             */
/*   Updated: 2022/12/12 15:08:40 by aarsenio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(void)
{
	t_stack	*t;

	if (!a()->next)
		return ;
	t = a()->next;
	a()->next = a()->next->next;
	t->next = b()->next;
	b()->next = t;
	write(1, "pb\n", 3);
}

void	pa(void)
{
	t_stack	*t;

	if (!b()->next)
		return ;
	t = b()->next;
	b()->next = b()->next->next;
	t->next = a()->next;
	a()->next = t;
	write(1, "pa\n", 3);
}
