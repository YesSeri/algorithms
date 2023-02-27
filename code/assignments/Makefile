##
# Assignment 1
#
# @file
# @version 0.1


# HEADERS = program.h headers.h

default: first

first.o: first.c
	gcc -Wall -g -c first.c -o first.o

first: first.o
	gcc first.o -o first

clean:
	-rm -f first.o
	-rm -f first

# end
