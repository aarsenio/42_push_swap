/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarsenio <aarsenio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:27:51 by aarsenio          #+#    #+#             */
/*   Updated: 2022/10/31 17:11:49 by aarsenio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_node *a)
{
	t_node	*tmp;
	t_node	*tmp2;

	tmp = a;
	while (tmp->next->next)
		tmp = tmp->next;
	tmp2 = tmp->next;
	tmp->next = NULL;
	tmp2->next = a->next;
	a->next = tmp2;
	write(1, "rra\n", 4);
}

void	rrb(t_node *b)
{
	t_node	*tmp;
	t_node	*tmp2;

	tmp = b;
	while (tmp->next->next)
		tmp = tmp->next;
	tmp2 = tmp->next;
	tmp->next = NULL;
	tmp2->next = b->next;
	b->next = tmp2;
	write(1, "rrb\n", 4);
}

void	rrr(t_node *a, t_node *b)
{
	t_node	*tmp;
	t_node	*tmp2;

	tmp = a;
	while (tmp->next->next)
		tmp = tmp->next;
	tmp2 = tmp->next;
	tmp->next = NULL;
	tmp2->next = a->next;
	a->next = tmp2;
	tmp = b;
	while (tmp->next->next)
		tmp = tmp->next;
	tmp2 = tmp->next;
	tmp->next = NULL;
	tmp2->next = b->next;
	b->next = tmp2;
	write(1, "rrr\n", 4);
}
