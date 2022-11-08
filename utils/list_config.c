/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_config.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarsenio <aarsenio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:16:04 by aarsenio          #+#    #+#             */
/*   Updated: 2022/11/08 21:37:33 by aarsenio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	print_list(t_stack *a)
{
	t_stack	*t;

	t = a->next;
	while (t)
	{
		printf("%d\n", t->x);
		t = t->next;
	}
}

void	add_node(t_stack *new, t_stack *l)
{
	while (l)
	{
		if (!l->next)
		{
			l->next = new;
			break ;
		}
		l = l->next;
	}
}

t_stack	*new_node(int n)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->next = NULL;
	new->x = n;
	return (new);
}
