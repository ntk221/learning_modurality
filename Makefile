NAME = push_swap
SRCS = main.c arguments_check.c compression.c
OBJS = $(SRCS:%.c=%.o)
INCLUDE = include
LIB = libft

$(NAME): $(SRCS)
	- make -C sort
	- make -C stack
	- mkae -C libft
	gcc -I$(INCLUDE) -L$(LIB) -c $(SRCS) -lft
	gcc -L$(LIB) $(OBJS) sort/*.o stack/*.o -o $(NAME) -lft

clean:
	- make clean -C sort
	- make clean -C stack
	- rm $(OBJS)

fclean: clean
	rm $(NAME)

re: fclean $(NAME)
