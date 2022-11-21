/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_config.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarsenio <aarsenio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:16:04 by aarsenio          #+#    #+#             */
/*   Updated: 2022/11/21 16:40:57 by aarsenio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	add_node(t_stack *new, t_stack *x)
{
	while (x)
	{
		if (!x->next)
		{
			x->next = new;
			break ;
		}
		x = x->next;
	}
}

t_stack	*new_node(int nbr)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->next = NULL;
	new->x = nbr;
	new->n = 1;
	return (new);
}

int	list_size(t_stack *x)
{
	int		i;
	t_stack	*t;

	t = x->next;
	i = 0;
	while (t)
	{
		i++;
		t = t->next;
	}
	return (i);
}

int	minmax(t_stack *x, int type)
{
	int		i;
	t_stack	*t;

	t = x->next;
	i = t->n;
	if (type == 1)
	{
		while (t)
		{
			if (t->n > i)
				i = t->n;
			t = t->next;
		}
	}
	if (type == 0)
	{
		while (t)
		{
			if (t->n < i)
				i = t->n;
			t = t->next;
		}
	}
	return (i);
}

void	set_index(void)
{
	t_stack	*t;
	t_stack	*t2;

	t = a()->next;
	while (t)
	{
		t2 = a()->next;
		while (t2)
		{
			if (t->x > t2->x)
				t->n++;
			t2 = t2->next;
		}
		t = t->next;
	}
}
