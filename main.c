/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarsenio <aarsenio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:19:05 by aarsenio          #+#    #+#             */
/*   Updated: 2022/11/13 15:42:26 by aarsenio         ###   ########.fr       */
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
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
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

static void	duplicate_numbers(void)
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

static void	parsing(char *str)
{
	int		i;
	int		j;
	int		x;
	char	*tmp;

	i = 0;
	while (str[i])
	{
		j = 0;
		x = 0;
		if (str[i] != ' ')
		{
			while (str[i + x] && str[i + x] != ' ')
				x++;
			printf("x: %i\n", x);
			tmp = malloc((x + 1) * sizeof(char));
			while (str[i] && str[i] != ' ')
				tmp[j++] = str[i++];
			printf("size of j: %i\n", j);
			printf("tmp: %s\n", tmp);
			tmp[++j] = '\0';
			add_node(new_node(ft_atoi(tmp)), a());
			free(tmp);
		}
		i++;
	}
	if (list_size(a()) < 1)
		print_error("No Arguments", 1);
}

static void	redirect(void)
{
	if (list_size(a()) == 3 && a()->next->x > a()->next->next->x)
		sa();
	if (list_size(a()) == 4)
		algo_3();
	if (list_size(a()) == 5 || list_size(a()) == 6)
		algo_5();
}

int	main(int ac, char **av)
{
	int	i;

	if (ac < 2)
		return (0);
	if (ac == 2)
		parsing(av[1]);
	i = 0;
	if (ac > 2)
		while (av[++i])
			add_node(new_node(ft_atoi(av[i])), a());
	duplicate_numbers();
	redirect();
	printf("stack a:\n");
	print_list(a());
	printf("stack b:\n");
	print_list(b());
	exit_program();
}
