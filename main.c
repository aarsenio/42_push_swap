/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarsenio <aarsenio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:19:05 by aarsenio          #+#    #+#             */
/*   Updated: 2022/11/08 21:34:28 by aarsenio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <limits.h>

static int	ft_atoi(const char *str)
{
	int	i;
	int	num;
	int	signal;

	i = 0;
	num = 0;
	signal = 1;
	while ((str[i] > 8 && str[i] < 14) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			signal = -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + signal * (str[i++] - '0');
		if ((num < 0) || num > INT_MAX)
			return (-1);
	}
	return (num);
}

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

static void	redirect(int ac)
{
	if (ac == 3 && a()->next->x > a()->next->next->x)
		sa();
	if (ac == 4)
		algo3();
}

int	main(int ac, char **av)
{
	int	i;

	if (ac < 2)
		return (0);
	i = 0;
	while (av[++i])
		add_node(new_node(ft_atoi(av[i])), a());
	redirect(ac);
	printf("stack a:\n");
	print_list(a());
	printf("stack b:\n");
	print_list(b());
}
