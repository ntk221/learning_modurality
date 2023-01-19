/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kazuki <kazuki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 03:10:47 by kazuki            #+#    #+#             */
/*   Updated: 2023/01/19 18:41:44 by kazuki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "sort.h"

int	find_min_value(t_stack *stack_a, size_t *index)
{
	t_stack_node	*min;
	size_t			size;
	t_stack_node	*itr;
	size_t			id;

	itr = stack_a->head;
	min = itr;
	size = stack_a->size;
	id = 0;
	while (size)
	{
		if (min->val > itr->val)
		{
			min = itr;
			*index = id;
		}
		itr = itr->next;
		size--;
		id++;
	}
	return (min->val);
}
