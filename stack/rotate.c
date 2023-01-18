/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kazuki <kazuki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 08:49:38 by kazuki            #+#    #+#             */
/*   Updated: 2023/01/19 01:21:36 by kazuki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include "push_swap.h"

void	rotate(t_stack **stack)
{
	int		data;
	bool	res;

	res = pop_front(*stack, &data);
	if (!res)
		error(stack, NULL);
	res = push_back(*stack, data);
	if (!res)
		error(stack, NULL);
}

void	ra(t_stack **a)
{
	rotate(a);
	ft_putendl_fd("ra", 1);
}

void	rb(t_stack **b)
{
	rotate(b);
	ft_putendl_fd("rb", 1);
}

/*#include <assert.h>
int main(void)
{
	t_stack *a = create_stack();
	push_back(a, 1);
	push_back(a, 100);
	ra(&a);
	assert(a->head->val == 100);
}*/
