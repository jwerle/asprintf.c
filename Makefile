
CFLAGS += -std=c99 -Wall -Wextra

default: clean test
	./test

clean:
	rm -f test test.o asprintf.o

test: test.o asprintf.o
	$(CC) $^ $(CFLAGS) -o test

.PHONY: default clean
