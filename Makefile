CC=gcc
CFLAGS=-I/usr/local/include -I./refactor-code
LDFLAGS=-lcriterion

all: test

test: tests/test_functions.c refactor-code/functions.c
	$(CC) $(CFLAGS) -o test.exe tests/test_functions.c refactor-code/functions.c $(LDFLAGS)

run: test
	test.exe

clean:
	del test.exe