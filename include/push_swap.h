
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stddef.h>
# include <stdlib.h>
# include <stdbool.h>
# include <unistd.h>
# include <libft.h>
# include <stack.h>
# include <sort.h>

/* util functions */
int				ps_atoi(const char *str);
int				atoi_loop(const char *str, int num, int sign);
bool			check_argv(int argc, char **argv);
void			error_message(void);
t_stack			*initialize_stack_a(t_stack *stack_a, int *data, int argc);
bool			is_sorted(t_stack *stack);
bool			has_duplicate(char **src);
int				*argv_to_array(int argc, char **argv);
int				linear_search(int *ordered_array, int search);
int				*bubble_sort_arr(int *list, int len);
int				*copy_data(int *copy, int argc);
int				*compression(int	*data, int argc);

t_stack	*initialize_stack_a(t_stack *stack_a, int	*data, int argc);
bool	is_sorted(t_stack *stack);

#endif

