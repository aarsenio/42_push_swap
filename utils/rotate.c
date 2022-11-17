/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarsenio <aarsenio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:27:53 by aarsenio          #+#    #+#             */
/*   Updated: 2022/11/16 23:40:05 by aarsenio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(void)
{
	t_stack	*t;

	t = a()->next;
	a()->next = a()->next->next;
	t->next = NULL;
	add_node(t, a());
	write(1, "ra\n", 3);
}

void	rb(void)
{
	t_stack	*t;

	t = b()->next;
	b()->next = b()->next->next;
	t->next = NULL;
	add_node(t, b());
	write(1, "rb\n", 3);
}

void	rr(void)
{
	t_stack	*t;

	t = a()->next;
	a()->next = a()->next->next;
	t->next = NULL;
	add_node(t, a());
	t = b()->next;
	b()->next = b()->next->next;
	t->next = NULL;
	add_node(t, b());
	write(1, "rr\n", 3);
}
