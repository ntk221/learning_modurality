/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kazuki <kazuki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 03:10:47 by kazuki            #+#    #+#             */
/*   Updated: 2023/01/19 01:21:15 by kazuki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "sort.h"

t_stack_node	*find_min_node(t_stack *stack_a, size_t *index)
{
	t_stack_node	*min;
	int				size;
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
	return (min);
}
