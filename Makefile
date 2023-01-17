NAME = push_swap
SRCS = main.c
OBJS = $(SRCS:%.c=%.o)
INCLUDE = include
LIB = libft

$(NAME): $(SRCS)
	- make -C sort
	- make -C stack
	- mkae -C libft
	gcc -c $(SRCS) -I$(INCLUDE)
	gcc -L$(LIB) main.o sort/*.o stack/*.o -o $(NAME) -lft

clean:
	- make clean -C sort
	- make clean -C stack
	- rm $(OBJS)

fclean: clean
	rm $(NAME)
