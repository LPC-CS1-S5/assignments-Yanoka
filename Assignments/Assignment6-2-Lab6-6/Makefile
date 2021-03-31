CC=g++
CFLAGS=-I.
# DEPS = rectangle.h

# %.o: %.c $(DEPS)
%.o: %.c 
	$(CC) -c -o $@ $< $(CFLAGS)

buildall: main.o inputValidate.o getListPrime.o 
	$(CC) -o A6 main.o inputValidate.o getListPrime.o 
clean: 
	rm -f *.o A6