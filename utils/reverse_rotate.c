/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarsenio <aarsenio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:27:51 by aarsenio          #+#    #+#             */
/*   Updated: 2022/11/16 23:39:51 by aarsenio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(void)
{
	t_stack	*t;
	t_stack	*t2;

	if (!a()->next || !a()->next->next)
		return ;
	t = a();
	while (t->next->next)
		t = t->next;
	t2 = t->next;
	t->next = NULL;
	t2->next = a()->next;
	a()->next = t2;
	write(1, "rra\n", 4);
}

void	rrb(void)
{
	t_stack	*t;
	t_stack	*t2;

	if (!b()->next || !b()->next->next)
		return ;
	t = b();
	while (t->next->next)
		t = t->next;
	t2 = t->next;
	t->next = NULL;
	t2->next = b()->next;
	b()->next = t2;
	write(1, "rrb\n", 4);
}

void	rrr(void)
{
	t_stack	*t;
	t_stack	*t2;

	if (!a()->next || !a()->next->next || !b()->next || !b()->next->next)
		return ;
	t = a();
	while (t->next->next)
		t = t->next;
	t2 = t->next;
	t->next = NULL;
	t2->next = a()->next;
	a()->next = t2;
	t = b();
	while (t->next->next)
		t = t->next;
	t2 = t->next;
	t->next = NULL;
	t2->next = b()->next;
	b()->next = t2;
	write(1, "rrr\n", 4);
}
