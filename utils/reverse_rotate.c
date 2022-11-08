/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarsenio <aarsenio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:27:51 by aarsenio          #+#    #+#             */
/*   Updated: 2022/11/08 21:36:23 by aarsenio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(void)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	if (!a()->next || !a()->next->next)
		return ;
	tmp = a();
	while (tmp->next->next)
		tmp = tmp->next;
	tmp2 = tmp->next;
	tmp->next = NULL;
	tmp2->next = a()->next;
	a()->next = tmp2;
	write(1, "rra\n", 4);
}

void	rrb(void)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	if (!b()->next || !b()->next->next)
		return ;
	tmp = b();
	while (tmp->next->next)
		tmp = tmp->next;
	tmp2 = tmp->next;
	tmp->next = NULL;
	tmp2->next = b()->next;
	b()->next = tmp2;
	write(1, "rrb\n", 4);
}

void	rrr(void)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	if (!a()->next || !a()->next->next || !b()->next || !b()->next->next)
		return ;
	tmp = a();
	while (tmp->next->next)
		tmp = tmp->next;
	tmp2 = tmp->next;
	tmp->next = NULL;
	tmp2->next = a()->next;
	a()->next = tmp2;
	tmp = b();
	while (tmp->next->next)
		tmp = tmp->next;
	tmp2 = tmp->next;
	tmp->next = NULL;
	tmp2->next = b()->next;
	b()->next = tmp2;
	write(1, "rrr\n", 4);
}
