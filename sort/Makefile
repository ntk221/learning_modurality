CC		= gcc
CFLAGS  = -Wall -Werror -Wextra
SRCS	= sort_utils.c sort.c
OBJS	= $(SRCS:%c=%o)

######   path  ########
STACK_PATH = ../stack/
LIBSTACK = ../stack/libstack.a
INCLUDE = ../include

all:	$(OBJS)

$(OBJS): $(SRCS)
	$(CC) -I$(INCLUDE) -c $? 
	touch $(OBJS)

clean:
	rm *.o

test: $(OBJS) $(LIBSTACK)
	$(CC) -c -I$(INCLUDE) sort_test.c
	$(CC) $(OBJS) -I$(INCLUDE) -L$(STACK_PATH) sort_test.o -o sort_test -lstack
	./sort_test
	rm sort_test
	rm sort_test.o
