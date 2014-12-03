
SRC = asprintf.c
CFLAGS += -std=c99 -Wall -Wextra
PREFIX ?= /usr/local

all: clean test

clean:
	rm -f test

test:
	$(CC) test.c $(SRC) $(CFLAGS) -o test
	./test

.PHONY: test
