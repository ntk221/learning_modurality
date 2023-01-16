CC		= gcc

CFLAGS  = -Wall -Werror -Wextra

SRCS	= sort_utils.c sort.c
OBJS	= $(SRCS:%c=%o)

STACK_PATH = ../stack/
LIBSTACK = ../stack/libstack.a

INCLUDE = ../include

.c.o: $(OBJS)
			$(CC) -I$(INCLUDE) -c $(SRCS)

clean:
	rm $(OBJS)

test: $(OBJS) $(LIBSTACK)
	$(CC) -c -I$(INCLUDE) sort_test.c
	$(CC) $(OBJS) -I$(INCLUDE) -L$(STACK_PATH) sort_test.o -o sort_test -lstack
