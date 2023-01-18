/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kazuki <kazuki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 11:29:41 by kazuki            #+#    #+#             */
/*   Updated: 2023/01/19 01:21:29 by kazuki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"

/*t_stack	*bubble_sort(t_stack *stack_a, t_stack *stack_b)
{
	int		num_of_comparison;
	int		i;

	num_of_comparison = stack_a->size;
	while (num_of_comparison)
	{
		i = 0;
		while (i < num_of_comparison)
		{
			if (i == num_of_comparison - 1)
				stack_b = pb(stack_a, stack_b);
			else if (stack_a->head->val < stack_a->head->next->val)
			{
				stack_a = sa(stack_a);
				stack_a = ra(stack_a);
			}
			else
				stack_a = ra(stack_a);
			i++;
		}
		num_of_comparison--;
	}
	while (stack_b->size)
		stack_a = pa(stack_a, stack_b);
	return (stack_a);
}*/

void	radix_sort(t_stack **a, t_stack **b)
{
	size_t	max_bits;
	size_t	size;
	size_t	i;
	size_t	j;

	max_bits = 0;
	while (((*a)->size - 1) >> max_bits != 0)
		max_bits++;
	size = (*a)->size;
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j++ < size)
		{
			if ((((*a)->head->val >> i) & 1) == true)
				ra(a);
			else
				pb(a, b);
		}
		while ((*b)->size != 0)
			pa(a, b);
		i++;
	}
}

void	sort_3(t_stack **a)
{
	int	first;
	int	second;
	int	third;

	first = (*a)->head->val;
	second = (*a)->head->next->val;
	third = (*a)->head->next->next->val;
	if (first > second && second < third && third > first)
		sa(a);
	else if (first > second && second > third && third < first)
	{
		sa(a);
		rra(a);
	}
	else if (first > second && second < third && third < first)
		ra(a);
	else if (first < second && second > third && third > first)
	{
		sa(a);
		ra(a);
	}
	else if (first < second && second > third && third < first)
		rra(a);
}

void	sort_5(t_stack **a, t_stack **b)
{
	size_t			id;
	t_stack_node	*min;
	bool			flag;

	flag = false;
	if ((*a)->size == 5)
	{
		id = 0;
		min = find_min_node(*a, &id);
		while (min != (*a)->head)
		{
			if (id < (*a)->size / 2)
				ra(a);
			else
				rra(a);
		}
		pb(a, b);
		flag = true;
	}
	sort_4(a, b);
	if (flag)
		pa(a, b);
}

void	sort_4(t_stack **a, t_stack **b)
{
	size_t			id;
	t_stack_node	*min;

	id = 0;
	min = find_min_node(*a, &id);
	while (min != (*a)->head)
	{
		if (id < (*a)->size / 2)
			ra(a);
		else
			rra(a);
	}
	pb(a, b);
	sort_3(a);
	pa(a, b);
}

void	sort(t_stack **a, t_stack **b)
{
	if ((*a)->size == 2)
		sa(a);
	else if ((*a)->size == 3)
		sort_3(a);
	else if ((*a)->size == 5 || (*a)->size == 4)
		sort_5(a, b);
	else
		radix_sort(a, b);
}
