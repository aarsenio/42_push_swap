/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_program.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarsenio <aarsenio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:00:58 by aarsenio          #+#    #+#             */
/*   Updated: 2022/11/10 13:07:18 by aarsenio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	exit_program(void)
{
	t_stack	*tmp;

	while (a()->next)
	{
		tmp = a()->next;
		a()->next = a()->next->next;
		free (tmp);
	}
	exit(1);
}

void	print_error(char *str, int error)
{
	int	i;

	i = 0;
	if (error)
		write(1, "Error\n", 7);
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
	exit_program();
}
