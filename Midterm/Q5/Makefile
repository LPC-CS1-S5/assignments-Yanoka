CC=g++
CFLAGS=-I.
# DEPS = rectangle.h

# %.o: %.c $(DEPS)
%.o: %.c 
	$(CC) -c -o $@ $< $(CFLAGS)

buildall: main.o evensumGet.o oddsumGet.o  
	$(CC) -o Q5 main.o evensumGet.o oddsumGet.o
clean: 
	rm -f *.o Q5