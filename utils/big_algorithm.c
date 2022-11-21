/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_algorithm.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarsenio <aarsenio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 10:38:58 by aarsenio          #+#    #+#             */
/*   Updated: 2022/11/21 16:41:18 by aarsenio         ###   ########.fr       */
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

int	box_sorter(void)
{
	t_stack	*t;
	int		counter;
	int		per_box;

	counter = 2;
	per_box = 15 + ((list_size(a()) / 100) * 10);
	while (((list_size(a()) + 1) / counter) > per_box)
		counter++;
	t = a()->next;
	while (t)
	{
		t->box = (t->n / ((list_size(a()) + 2) / counter));
		t = t->next;
	}
	return (counter - 1);
}

void	big_algo(int nbr)
{
	while (nbr >= 0)
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
		if (exist_box(nbr + 1))
			while (a()->next->box != (nbr + 1))
				ra();
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
