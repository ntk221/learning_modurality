/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kazuki <kazuki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 21:10:18 by kazuki            #+#    #+#             */
/*   Updated: 2023/01/19 00:20:58 by kazuki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

# include <stdlib.h>
# include <stdbool.h>
# include <unistd.h>

typedef struct s_stack_node
{
	int					val;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
}	t_stack_node;

typedef struct s_stack
{
	t_stack_node	*head;
	t_stack_node	*last;
	size_t			size;
}	t_stack;

t_stack				*create_stack(void);
bool				push_front(t_stack *stack, int value);
bool				push_back(t_stack *stack, int value);
bool				pop_front(t_stack *stack, int *data);
bool				pop_back(t_stack *stack, int *data);
void				destroy_stack(t_stack *stack);
void				print_stack(t_stack *stack);

/* normal operations */
extern void			swap(t_stack **stack);
extern void			sa(t_stack **a);
extern void			sb(t_stack **b);
extern void			rotate(t_stack **stack);
extern void			ra(t_stack **a);
extern void			rb(t_stack **b);
extern void			reverse_rotate(t_stack **stack);
extern void			rra(t_stack **a);
extern void			rrb(t_stack **b);
extern void			push(t_stack **src, t_stack **dst);
extern void			pa(t_stack **a, t_stack **b);
extern void			pb(t_stack **a, t_stack **b);

#endif
