/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_config.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarsenio <aarsenio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:16:04 by aarsenio          #+#    #+#             */
/*   Updated: 2022/10/28 16:51:36 by aarsenio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	print_list(t_node *a)
{
	t_node          *t;
	
	t = a->next;
	while (t)
	{
		printf("%d\n", t->x);
		t = t->next;
	}
}

void	add_node(t_node *new, t_node *l)
{
	while (l)
	{
		if (!l->next)
		{
			l->next = new;
			break;
		}
		l = l->next;
	}
}

t_node	*new_node(int n)
{
	t_node	*new;
	
	new = malloc(sizeof(t_node));
	if (!new)
		return (NULL);
	new->next = NULL;
	new->x = n;
	return (new);
}
