/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kazuki <kazuki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 09:49:13 by kazuki            #+#    #+#             */
/*   Updated: 2023/01/19 01:21:34 by kazuki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include "push_swap.h"

void	reverse_rotate(t_stack **stack)
{
	int		data;
	bool	res;

	res = pop_back(*stack, &data);
	if (!res)
		error(stack, NULL);
	res = push_front(*stack, data);
	if (!res)
		error(stack, NULL);
}

void	rra(t_stack **a)
{
	reverse_rotate(a);
	ft_putendl_fd("rra", 1);
}

void	rrb(t_stack **b)
{
	reverse_rotate(b);
	ft_putendl_fd("rrb", 1);
}

/*int main(void)
{
	t_stack *a = create_stack();
	push_back(a, 1);
	push_back(a, 2);
	rra(&a);
}*/