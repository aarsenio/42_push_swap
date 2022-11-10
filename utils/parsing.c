/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarsenio <aarsenio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:01:41 by aarsenio          #+#    #+#             */
/*   Updated: 2022/11/10 13:10:53 by aarsenio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	duplicate_numbers(void)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	tmp = a()->next;
	while (tmp)
	{
		tmp2 = tmp->next;
		while (tmp2)
		{
			if (tmp->x == tmp2->x)
				print_error("Duplicated Numbers", 1);
			tmp2 = tmp2->next;
		}
		tmp = tmp->next;
	}
}
