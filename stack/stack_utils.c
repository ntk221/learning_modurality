/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kazuki <kazuki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:51:43 by kazuki            #+#    #+#             */
/*   Updated: 2023/01/15 21:53:56 by kazuki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack.h>

t_stack	*initialize_stack_a(t_stack *stack_a, int	*data, int argc)
{
	int		i;
	bool	res;

	i = 0;
	stack_a = create_stack();
	while (i < argc - 1)
	{
		res = push_back(stack_a, data[i]);
		if (!res)
		{
			free(stack_a);
			// error_message();
			exit(1);
		}
		i++;
	}
	return (stack_a);
}

bool	is_sorted(t_stack *stack)
{
	t_stack_node	*head;

	if (stack->head == NULL)
		return (true);
	head = stack->head;
	while (head->next != NULL)
	{
		if (head->val > head->next->val)
			return (false);
		head = head->next;
	}
	return (true);
}
