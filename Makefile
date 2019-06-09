CC            = gcc
CFLAGS        = -O3 -Wall
OBJS          = sosu.o 
PROGRAM       = test

all : $(PROGRAM)

$(PROGRAM) : $(OBJS)
	$(CC) $(OBJS) -o $(PROGRAM)

clean:
	rm -f *.o *~ $(PROGRAM)