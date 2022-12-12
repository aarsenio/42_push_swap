/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarsenio <aarsenio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:19:01 by aarsenio          #+#    #+#             */
/*   Updated: 2022/12/12 15:37:02 by aarsenio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_stack
{
	int				x;
	int				n;
	int				box;
	struct s_stack	*next;
}t_stack;

t_stack	*a(void);
t_stack	*b(void);
t_stack	*new_node(int nbr);
void	add_node(t_stack *new, t_stack *x);
int		list_size(t_stack *x);
int		is_sorted(void);
int		minmax(t_stack *x, int type);
void	set_index(void);
int		box_sorter(void);
int		smart_rotation(t_stack *x, int i);
void	sa(void);
void	sb(void);
void	ss(void);
void	pb(void);
void	pa(void);
void	ra(void);
void	rb(void);
void	rr(void);
void	rra(void);
void	rrb(void);
void	rrr(void);
void	algo_3(void);
void	algo_5(void);
void	big_algo(int nbr);
void	radix_sort(void);
void	exit_program(int error);

#endif