/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arguments_check.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kazuki <kazuki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 00:22:50 by kazuki            #+#    #+#             */
/*   Updated: 2023/01/19 00:24: by kazuki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check(const char *str)
{
	if (!ft_isdigit(*str))
		error_message();
	while (*str != '\0')
	{
		if (!ft_isdigit(*str))
			error_message();
		str++;
	}
}

int	atoi_loop(const char *str, int num, int sign)
{
	long long int	n;

	n = num;
	while (*str >= '0' && *str <= '9')
	{
		n = n * 10 + (*str - '0') * sign;
		if (n < INT_MIN && sign == -1)
			error_message();
		if (n > INT_MAX && sign == 1)
			error_message();
		str++;
	}
	return (n);
}

int	ps_atoi(const char *str)
{
	int	sign;
	int	num;

	sign = 1;
	num = 0;
	while (*str != '\0' && ft_isspace(*str))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	check(str);
	num = atoi_loop(str, num, sign);
	return (num);
}

/*#include <stdio.h>
#include <limits.h>
#include <assert.h>
int main()
{
	int res = ps_atoi("1");
	assert(res == 1);
	res = ps_atoi("-1");
	assert(res == -1);
	res = ps_atoi("");
	// printf("%d\n", INT_MAX);
	res = ps_atoi("2147483647");
	assert(res == 2147483647);
	// ps_atoi("2147483648"); Error
	res = ps_atoi("-2147483648");
	assert(res == INT_MIN);
	// ps_atoi("-2147483649"); Error
}*/
