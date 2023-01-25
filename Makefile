NAME = push_swap
SRCS = main.c ps_atoi.c compression.c error.c
OBJS = $(SRCS:%.c=%.o)
INCLUDE = include
LIB = libft
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	- make -C sort
	- make -C stack
	- make -C libft
	$(CC) $(CFLAGS) -I$(INCLUDE) -L$(LIB) $(OBJS) sort/*.o stack/*.o -o $(NAME) -lft

$(OBJS): $(SRCS)
	gcc $(CFLAGS) -I$(INCLUDE) -c $?
	touch $(OBJS)

clean:
	- make clean -C sort
	- make clean -C stack
	- rm $(OBJS)

fclean: clean
	- rm $(NAME)

re: fclean $(NAME)
