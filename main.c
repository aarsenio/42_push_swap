/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarsenio <aarsenio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:19:05 by aarsenio          #+#    #+#             */
/*   Updated: 2022/11/11 13:01:54 by aarsenio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <limits.h>

static int	ft_atoi(const char *str)
{
	int		i;
	int		signal;
	long	num;

	i = 0;
	num = 0;
	signal = 1;
	if (str[i] == '-')
	{
		signal = -1;
		i++;
	}
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			print_error("Invalid character", 1);
		num = (num * 10) + (str[i++] - '0');
	}
	if (num > INT_MAX || num < INT_MIN)
		print_error("oops", 1);
	return (num * signal);
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
		algo_3();
	if (ac == 5 || ac == 6)
		algo_5();
}

int	main(int ac, char **av)
{
	int	i;

	if (ac < 2)
		return (0);
	i = 0;
	while (av[++i])
		add_node(new_node(ft_atoi(av[i])), a());
	duplicate_numbers();
	redirect(ac);
	printf("stack a:\n");
	print_list(a());
	printf("stack b:\n");
	print_list(b());
	exit_program();
}
