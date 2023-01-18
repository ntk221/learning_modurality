NAME = push_swap
SRCS = main.c arguments_check.c compression.c error.c
OBJS = $(SRCS:%.c=%.o)
INCLUDE = include
LIB = libft
CC = gcc

all: $(NAME)

$(NAME): $(OBJS)
	- make -C sort
	- make -C stack
	- make -C libft
	$(CC) -I$(INCLUDE) -L$(LIB) $(OBJS) sort/*.o stack/*.o -o $(NAME) -lft

$(OBJS): $(SRCS)
	gcc -I$(INCLUDE) -c $(SRCS)

clean:
	- make clean -C sort
	- make clean -C stack
	- rm $(OBJS)

fclean: clean
	- rm $(NAME)

re: fclean $(NAME)
