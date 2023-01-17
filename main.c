#include <push_swap.h>

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
  // a = create_stack();
  // error_message();
  return 0;
}
