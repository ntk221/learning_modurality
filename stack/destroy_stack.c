/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kazuki <kazuki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 04:59:36 by kazuki            #+#    #+#             */
/*   Updated: 2023/01/19 01:20:39 by kazuki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	destroy_stack(t_stack *stack)
{
	t_stack_node	*next_target;

	while (stack->size)
	{
		next_target = stack->head->next;
		free(stack->head);
		stack->head = next_target;
		stack->size--;
	}
	free(stack);
}
