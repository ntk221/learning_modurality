NAME = test
SRCS = main.c
OBJS = $(SRCS:%.c=%.o)

$(NAME): $(SRCS)
	make -C sort
	make -C stack
	gcc -c $(SRCS)
	gcc main.o sort/*.o stack/*.o -o test

clean:
	- make clean -C sort
	- make clean -C stack
	- rm $(OBJS)

fclean: clean
	rm $(NAME)
