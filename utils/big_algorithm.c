/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_algorithm.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarsenio <aarsenio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 10:38:58 by aarsenio          #+#    #+#             */
/*   Updated: 2022/11/17 11:10:26 by aarsenio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	box_rotation(int nbr)
{
	t_stack	*t;
	int		start;
	int		end;

	t = a()->next;
	start = 0;
	end = 0;
	while (t && t->box != nbr)
	{
		start++;
		t = t->next;
	}
	t = a()->next;
	while (t)
	{
		if (t->box == nbr)
			end = 0;
		end++;
		t = t->next;
	}
	return (start > end);
}

static int	exist_box(int nbr)
{
	t_stack	*t;
	
	t = a()->next;
	while (t)
	{
		if (t->box == nbr)
			return (1);
		t = t->next;
	}
	return (0);
}

void	big_algo(int nbr)
{
	while (nbr > 0)
	{
		while (exist_box(nbr))
		{
			if (box_rotation(nbr))
				while (a()->next->box != nbr)
					rra();
			else
				while (a()->next->box != nbr)
					ra();
			pb();
		}
		while (list_size(b()) > 0)
		{
			if (smart_rotation(b(), minmax(b(), 1)))
				while (b()->next->n != minmax(b(), 1))
					rrb();
			else
				while (b()->next->n != minmax(b(), 1))
					rb();
			pa();	
		}
		nbr--;
	}
}