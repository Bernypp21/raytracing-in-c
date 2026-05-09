CC = gcc
DEBUG = -g
PROG = main
INCLUDES = color.h vec3.h

all: $(PROG)


$(PROG): $(PROG).o
	$(CC) $(DEBUG) -o $@ $^


$(PROG).o: $(PROG).c $(INCLUDES)
	$(CC) -c $<


$(INCLUDES):
	$(INCLUDES)

clean:
	rm -f $(PROG) *.o *~ \#*

check:
	valgrind --leak-check=full ./$(PROG)

