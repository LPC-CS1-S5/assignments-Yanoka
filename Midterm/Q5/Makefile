CC=g++
CFLAGS=-I.
# DEPS = rectangle.h

# %.o: %.c $(DEPS)
%.o: %.c 
	$(CC) -c -o $@ $< $(CFLAGS)

buildall: main.o division.o getInput.o isSame.o  write.o
	$(CC) -o Q5 main.o division.o getInput.o isSame.o  write.o
clean: 
	rm -f *.o Q5