all: connections

CC=gcc
FLAGS=-Wall -g
AR=ar

connections: main.o my_mat.o
	$(CC) $(FLAGS) main.o my_mat.o -o connections -lm

main.o: main.c my_mat.h
	$(CC) $(FLAGS) -fPIC -c main.c

my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -fPIC -c my_mat.c
	
my_mat.a: my_mat.o
	$(AR) my_mat.a my_mat.o
	ranlib my_mat.a
	
valgrind:
	valgrind --leak-check=full ./connections


.PHONY: all clean valgrind


clean:
	 rm -f *.o *.a connections