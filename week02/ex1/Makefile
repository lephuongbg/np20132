CC = gcc


all: array

array: main.o array.o
	$(CC) -o $@ $^ 

main.o: main.c
	$(CC) -c $(CFLAGS) $<
	
array.o: array.c array.h
	$(CC) -c $(CFLAGS) $<

clean:
	rm *.o
