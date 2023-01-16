
SRCS 	 = sort/*.c stack/*.c
OBJDIR = objs
OBJS	 = $(SRCS:%.c=%.o)

$(OBJS): $(SRCS)
	make .o -C sort
	make .o -C stack

obj: $(OBJS)
	mkdir obj
	cp $(OBJS) obj
