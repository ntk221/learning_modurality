
SRCS 	 = sort/*.c stack/*.c
OBJDIR = objs
OBJS	 = $(SRCS:%.c=%.o)

all:	$(OBJDIR)

$(OBJS): $(SRCS)
	make .o -C sort
	make .o -C stack

$(OBJDIR): $(OBJS)
	mkdir $(OBJDIR)
	cp $(OBJS) obj
