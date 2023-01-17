#include <push_swap.h>

// Usage : This function outputs string "Error\n" to stderr
//         and call exit() to finish the program.
// Note： exit() should be called after freed all allocated memory ...?
void	error_message(void)
{
  ft_putendl_fd("Error", 2);
	exit(1);
}

static int	is_space(const char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

void	check(const char *str)
{
	while(*str != '\0')
	{
		if (!ft_isdigit(*str))
			error_message();
		str++;
	}
}

int	atoi_loop(const char *str, int num, int sign)
{
	int	prev;

	while (*str >= '0' && *str <= '9')
	{
		prev = num;
		num = num * 10 + sign * (*str - '0');
		if (num > prev && sign == -1)
			error_message();
		if (num < prev && sign == 1)
			error_message();
		str++;
	}
	return (num);
}

int	ps_atoi(const char *str)
{
	int	sign;
	int	num;

	sign = 1;
	num = 0;
	while (*str != '\0' && is_space(*str))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	if (!(*str >= '0' && *str <= '9'))
		error_message();
	check(str);
	num = atoi_loop(str, num, sign);
	return (num);
}

bool	has_duplicate(char **src)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (src[i] != NULL)
	{
		j = i + 1;
		while (src[j] != NULL)
		{
			if (ft_strncmp(src[i], src[j], ft_strlen(src[i])) == 0)
				return (true);
			j++;
		}
		i++;
	}
	return (false);
}

bool	check_argv(int argc, char **argv)
{
	int		i;	

	i = 1;
	while (i < argc)
	{
		ps_atoi(argv[i]);
		i++;
	}
	if (has_duplicate(argv))
		return (false);
	return (true);
}

int main(int argc, char **argv)
{
  t_stack *a;
  t_stack *b;
  int     *data;

  if (!check_argv(argc, argv))
    error_message();
  a = create_stack();
  // error_message();
  return 0;
}
