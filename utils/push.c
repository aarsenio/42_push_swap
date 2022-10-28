/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarsenio <aarsenio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:27:47 by aarsenio          #+#    #+#             */
/*   Updated: 2022/10/28 17:03:54 by aarsenio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(t_node *a, t_node *b)
{
	t_node	*tmp;
	
	if (!a->next)
		return ;
	tmp = a->next;
	a->next = a->next->next;
	tmp->next = b->next;
	b->next = tmp;
	write(1, "pb\n", 3);
}

void	pa(t_node *a, t_node *b)
{
	t_node	*tmp;
	
	if (!b->next)
		return ;
	tmp = b->next;
	b->next = b->next->next;
	tmp->next = a->next;
	a->next = tmp;
	write(1, "pa\n", 3);
}