/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarsenio <aarsenio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:27:56 by aarsenio          #+#    #+#             */
/*   Updated: 2022/11/16 23:40:15 by aarsenio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(void)
{
	t_stack	*t;

	if (!a()->next || !a()->next->next)
		return ;
	t = a()->next;
	a()->next = a()->next->next;
	t->next = a()->next->next;
	a()->next->next = t;
	write(1, "sa\n", 3);
}

void	sb(void)
{
	t_stack	*t;

	if (!b()->next || !b()->next->next)
		return ;
	t = b()->next;
	b()->next = b()->next->next;
	t->next = b()->next->next;
	b()->next->next = t;
	write(1, "sb\n", 3);
}

void	ss(void)
{
	t_stack	*t;

	if (!a()->next || !a()->next->next || !b()->next || !b()->next->next)
		return ;
	t = a()->next;
	a()->next = a()->next->next;
	t->next = a()->next->next;
	a()->next->next = t;
	t = b()->next;
	b()->next = b()->next->next;
	t->next = b()->next->next;
	b()->next->next = t;
	write(1, "ss\n", 3);
}
