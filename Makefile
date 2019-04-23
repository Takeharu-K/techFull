CC            = gcc
CFLAGS        = -O3 -Wall
OBJS          = main.o func.o
PROGRAM       = test

all : $(PROGRAM)

$(PROGRAM) : $(OBJS)
	$(CC) $(OBJS) -o $(PROGRAM)

clean:
	rm -f *.o *~ $(PROGRAM)