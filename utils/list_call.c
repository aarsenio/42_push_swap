/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_call.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarsenio <aarsenio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:01:41 by aarsenio          #+#    #+#             */
/*   Updated: 2022/12/05 16:36:37 by aarsenio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
