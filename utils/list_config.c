/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_config.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarsenio <aarsenio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:16:04 by aarsenio          #+#    #+#             */
/*   Updated: 2022/11/09 13:07:45 by aarsenio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	print_list(t_stack *x)
{
	t_stack	*t;

	t = x->next;
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
	i = t->x;
	if (type == 1)
	{
		while (t)
		{
			if (t->x > i)
				i = t->x;
			t = t->next;
		}
	}
	if (type == 0)
	{
		while (t)
		{
			if (t->x < i)
				i = t->x;
			t = t->next;
		}
	}
	return (i);
}
