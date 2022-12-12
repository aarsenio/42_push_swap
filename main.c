/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarsenio <aarsenio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:19:05 by aarsenio          #+#    #+#             */
/*   Updated: 2022/12/12 16:58:58 by aarsenio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <limits.h>

static long	atoi_parse(char **str, int s, long long n)
{
	while ((**str > 8 && **str < 14) || **str == 32)
		*str += 1;
	if (**str == '-' || **str == '+')
	{
		if (**str == '-')
			s *= -1;
		*str += 1;
		if (**str < '0' || **str > '9')
			exit_program(1);
	}
	while (**str >= '0' && **str <= '9')
	{
		n = n * 10 + s * (**str - '0');
		if (n < INT_MIN || n > INT_MAX)
			exit_program(1);
		*str += 1;
	}
	if (!((**str > 8 && **str < 14) || **str == 32) && **str)
		exit_program(1);
	while ((**str > 8 && **str < 14) || **str == 32)
		*str += 1;
	return (n);
}

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
				exit_program(1);
			tmp2 = tmp2->next;
		}
		tmp = tmp->next;
	}
}

static void	parse_arg(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		while (str[i] && *str[i])
			add_node(new_node(atoi_parse(&str[i], 1, 0)), a());
		i++;
	}
}

void	redirect(void)
{
	int	nbr;

	nbr = box_sorter();
	if (list_size(a()) == 2 && a()->next->x > a()->next->next->x)
		sa();
	if (list_size(a()) == 3)
		algo_3();
	if (list_size(a()) == 4 || list_size(a()) == 5)
		algo_5();
	if (list_size(a()) > 5 && list_size(a()) <= 200)
		big_algo(nbr);
	if (list_size(a()) > 200)
		radix_sort();
}

int	main(int ac, char **av)
{
	(void)ac;
	parse_arg((++av));
	duplicate_numbers();
	set_index();
	if (is_sorted())
		exit_program(0);
	redirect();
	exit_program(0);
}
