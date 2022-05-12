#Makefile

all: test

test: main.o list.o
	gcc -o test main.o list.o

main.o: list.h main.c
	gcc -c -o main.o main.c 

list.o: list.h list.c
	gcc -c -o list.o list.c

clean: 
	del /f /q *.o