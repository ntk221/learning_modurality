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

# include "stack.h"

/* helper function */
t_stack_node	*find_min_node(t_stack *stack_a, size_t *index);

void			radix_sort(t_stack **a, t_stack **b);
void			sort_3(t_stack **a);
void			sort_5(t_stack **a, t_stack **b);
void			sort_4(t_stack **a, t_stack **b);
extern void		sort(t_stack **a, t_stack **b);

#endif
