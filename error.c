/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kazuki <kazuki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 20:19:37 by kazuki            #+#    #+#             */
/*   Updated: 2023/01/19 00:35:05 by kazuki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

// Usage : This function outputs string "Error\n" to stderr
//         and call exit() to finish the program.
// Note： exit() should be called after freed all allocated memory ...?
void	error_message(void)
{
	ft_putendl_fd("Error", 2);
	exit(1);
}

void	error(t_stack **first, t_stack **second)
{
	if (*first == NULL && *second == NULL)
		return ;
	if (*first != NULL)
		free(*first);
	if (*second != NULL)
		free(*second);
	error_message();
}
