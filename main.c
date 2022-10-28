/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarsenio <aarsenio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:19:05 by aarsenio          #+#    #+#             */
/*   Updated: 2022/10/28 17:07:21 by aarsenio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int ft_atoi(const char *str)
{
	long long s;
	long long res;

	s = 1;
	res = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\v' || *str == '\f' || *str == '\r')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			s = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = (res * 10) + (s * (*str - '0'));
		if (res > 2147483647)
			return (-1);
		if (res < -2147483648)
			return (0);
		str++;
	}
	return (res);
}

int main(int ac, char **av)
{
	static t_node a;
	static t_node b;
	int i;

	(void)b;
	if (ac < 2)
		return (0);
	i = 0;
	while (av[++i])
		add_node(new_node(ft_atoi(av[i])), &a);
	pb(&a, &b);
	ss(&a, &b);
	printf("stack a:\n");
	print_list(&a);
	printf("stack b:\n");
	print_list(&b);
}
