/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kazuki <kazuki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 08:35:43 by kazuki            #+#    #+#             */
/*   Updated: 2023/01/19 01:21:02 by kazuki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include "push_swap.h"

void	swap(t_stack **stack)
{
	int				tmp;
	t_stack_node	*head;

	head = (*stack)->head;
	if ((*stack)->size < 2)
		error(stack, NULL);
	tmp = head->val;
	head->val = head->next->val;
	head->next->val = tmp;
}

void	sa(t_stack **a)
{
	swap(a);
	ft_putendl_fd("sa", 1);
}

void	sb(t_stack **b)
{
	swap(b);
	ft_putendl_fd("sb", 1);
}
