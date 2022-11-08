/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarsenio <aarsenio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:27:53 by aarsenio          #+#    #+#             */
/*   Updated: 2022/11/08 21:35:47 by aarsenio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(void)
{
	t_stack	*tmp;

	tmp = a()->next;
	a()->next = a()->next->next;
	tmp->next = NULL;
	add_node(tmp, a());
	write(1, "ra\n", 3);
}

void	rb(void)
{
	t_stack	*tmp;

	tmp = b()->next;
	b()->next = b()->next->next;
	tmp->next = NULL;
	add_node(tmp, b());
	write(1, "rb\n", 3);
}

void	rr(void)
{
	t_stack	*tmp;

	tmp = a()->next;
	a()->next = a()->next->next;
	tmp->next = NULL;
	add_node(tmp, a());
	tmp = b()->next;
	b()->next = b()->next->next;
	tmp->next = NULL;
	add_node(tmp, b());
	write(1, "rr\n", 3);
}
