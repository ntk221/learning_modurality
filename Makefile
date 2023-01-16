
OBJS = sort/*.o stack/*.o

obj: $(OBJS)
	mkdir obj
	mv $(OBJS) ./obj
