/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kazuki <kazuki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 10:38:44 by kazuki            #+#    #+#             */
/*   Updated: 2023/01/19 01:21:39 by kazuki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include "push_swap.h"

void	push(t_stack **src, t_stack **dst)
{
	int		data;
	bool	ret;

	if (!((*src)->size > 0))
		error(src, dst);
	ret = pop_front(*src, &data);
	if (!ret)
		error(src, dst);
	ret = push_front(*dst, data);
	if (!ret)
		error(src, dst);
}

void	pa(t_stack **a, t_stack **b)
{
	push(b, a);
	ft_putendl_fd("pa", 1);
}

void	pb(t_stack **a, t_stack **b)
{
	push(a, b);
	ft_putendl_fd("pb", 1);
}
