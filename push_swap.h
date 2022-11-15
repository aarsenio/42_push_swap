/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarsenio <aarsenio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:19:01 by aarsenio          #+#    #+#             */
/*   Updated: 2022/11/15 21:58:38 by aarsenio         ###   ########.fr       */
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
	int				i;
	struct s_stack	*next;
}t_stack;

t_stack	*a(void);
t_stack	*b(void);
t_stack	*new_node(int n);
void	add_node(t_stack *new, t_stack *x);
void	print_list(t_stack *x);
int		list_size(t_stack *x);
int		minmax(t_stack *x, int type);
void	set_index(void);
int		smart_rotate(t_stack *x, int type);
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
void	exit_program(void);
void	print_error(char *str, int error);

#endif