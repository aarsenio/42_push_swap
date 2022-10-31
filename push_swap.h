/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarsenio <aarsenio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:19:01 by aarsenio          #+#    #+#             */
/*   Updated: 2022/10/31 17:17:17 by aarsenio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_node
{
	int				x;
	struct s_node	*next;
}t_node;

void	print_list(t_node *a);
void 	add_node(t_node *new, t_node *l);
t_node	*new_node(int n);
void	sa(t_node *a);
void	sb(t_node *b);
void	ss(t_node *a, t_node *b);
void	pb(t_node *a, t_node *b);
void	pa(t_node *a, t_node *b);
void	ra(t_node *a);
void	rb(t_node *b);
void	rr(t_node *a, t_node *b);
void	rra(t_node *a);
void	rrb(t_node *b);
void	rrr(t_node *a, t_node *b);

#endif