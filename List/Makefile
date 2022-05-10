#Makefile

all: print_test

print_test: list.o main.o
	gcc -o print_test list.o main.o

main.o: list.h main.c list.c
	gcc -c -o main.o main.c 

list.o: list.h list.c
	gcc -c -o list.o list.c
