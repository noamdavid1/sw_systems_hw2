
CC=gcc
FLAGS=-Wall -g
AR=ar -rcs
OBJECTS_MAIN=main.o

all: connections


# .PHONY: run
# run: my_mat.c 
# 	 gcc my_mat.c -lm
# 	./a.out



connections: $(OBJECTS_MAIN) my_mat.a
	$(CC) $(FLAGS) -o connections $(OBJECTS_MAIN) my_mat.a 

my_mat.a: my_mat.o
	$(AR) my_mat.a my_mat.o	

main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c

my_mat.o: my_mat.c my_mat.h 
	$(CC) $(FLAGS) -c my_mat.c

.PHONY: clean all

clean:
	rm -f *.o *.a connections



