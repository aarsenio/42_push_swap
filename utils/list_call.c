/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_call.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarsenio <aarsenio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:01:41 by aarsenio          #+#    #+#             */
/*   Updated: 2022/12/12 16:10:10 by aarsenio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*a(void)
{
	static t_stack	a;

	return (&a);
}

t_stack	*b(void)
{
	static t_stack	b;

	return (&b);
}

int	is_sorted(void)
{
	t_stack	*t;

	t = a()->next;
	while (t->next)
	{
		if (t->x > t->next->x)
			return (0);
		t = t->next;
	}
	return (1);
}
