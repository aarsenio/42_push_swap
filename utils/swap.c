/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarsenio <aarsenio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:27:56 by aarsenio          #+#    #+#             */
/*   Updated: 2022/11/11 17:21:44 by aarsenio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(void)
{
	t_stack	*tmp;

	if (!a()->next || !a()->next->next)
		return ;
	tmp = a()->next;
	a()->next = a()->next->next;
	tmp->next = a()->next->next;
	a()->next->next = tmp;
	write(1, "sa\n", 3);
}

void	sb(void)
{
	t_stack	*tmp;

	if (!b()->next || !b()->next->next)
		return ;
	tmp = b()->next;
	b()->next = b()->next->next;
	tmp->next = b()->next->next;
	b()->next->next = tmp;
	write(1, "sb\n", 3);
}

void	ss(void)
{
	t_stack	*tmp;

	if (!a()->next || !a()->next->next || !b()->next || !b()->next->next)
		return ;
	tmp = a()->next;
	a()->next = a()->next->next;
	tmp->next = a()->next->next;
	a()->next->next = tmp;
	tmp = b()->next;
	b()->next = b()->next->next;
	tmp->next = b()->next->next;
	b()->next->next = tmp;
	write(1, "ss\n", 3);
}
