#include <push_swap.h>

t_stack	*initialize_stack_a(t_stack *stack_a, int	*data, int argc)
{
	int		i;
	bool	res;

	i = 0;
	stack_a = create_stack();
	while (i < argc - 1)
	{
		res = push_back(stack_a, data[i]);
		if (!res)
		{
			free(stack_a);
			error_message();
		}
		i++;
	}
	return (stack_a);
}

bool	is_sorted(t_stack *stack)
{
	t_stack_node	*head;

	if (stack->head == NULL)
		return (true);
	head = stack->head;
	while (head->next != NULL)
	{
		if (head->val > head->next->val)
			return (false);
		head = head->next;
	}
	return (true);
}

int main(int argc, char **argv)
{
  t_stack *a;
  t_stack *b;
  int     *data;

  if (argc < 2)
    error_message();
  if (!check_argv(argc, argv))
    error_message();
  data = argv_to_array(argc, argv);
  data = compression(data, argc);
  a = initialize_stack_a(a, data, argc);
  free(data);
  // a = create_stack();
  // error_message();
  return 0;
}
