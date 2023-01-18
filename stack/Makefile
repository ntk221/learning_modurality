CC		= gcc

CFLAGS  = -Wall -Werror -Wextra

SRCS	= push.c reverse_rotate.c rotate.c destroy_stack.c create_stack.c swap.c simple_operations.c
OBJS	= $(SRCS:%c=%o)
INCLUDE = ../include/
NAME = libstack.a

all:$(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJS): $(SRCS)
			$(CC) $(CFLAGS) -c $? -I$(INCLUDE) 
			touch $(OBJS)

clean:
	rm *.o

fclean: clean
	rm $(NAME)
