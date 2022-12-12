/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_program.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarsenio <aarsenio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:00:58 by aarsenio          #+#    #+#             */
/*   Updated: 2022/12/12 15:37:47 by aarsenio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	exit_program(int error)
{
	t_stack	*tmp;
	
	if (error)
		write(2, "Error\n", 7);
	while (a()->next)
	{
		tmp = a()->next;
		a()->next = a()->next->next;
		free (tmp);
	}
	exit(1);
}
