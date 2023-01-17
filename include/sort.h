/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kazuki <kazuki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 22:07:49 by kazuki            #+#    #+#             */
/*   Updated: 2023/01/15 22:26:1 by kazuki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORT_H
# define SORT_H

#include <stack.h>

/* helper function */
t_stack_node	*find_min_node(t_stack *stack_a, size_t *index);

t_stack	*radix_sort(t_stack *a, t_stack *b);
t_stack	*sort_3(t_stack *stack_a);
t_stack	*sort_5(t_stack *stack_a, t_stack *stack_b);
t_stack	*sort_4(t_stack *stack_a, t_stack *stack_b);
extern	t_stack	*sort(t_stack *stack_a, t_stack *stack_b);

#endif
