
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "asprintf.h"

int
main (void) {
  {
    char *str = NULL;
    char *fmt = "this is a %s";
    int size = asprintf(&str, fmt, "string");

    assert(str);
    assert(16 == size);
    free(str);
  }

  {
    char *str = NULL;
    char *fmt = "%d + %d = %d";
    int size = asprintf(&str, fmt, 1, 1, 2);

    assert(str);
    assert(9 == size);
    free(str);
  }

  {
    char *str = NULL;
    char *fmt = "bradley likes %s, %s, %s, and %s";
    int size = asprintf(&str, fmt,
        "kinkajous", "bananas", "monkeys", "the beach");

    assert(str);
    assert(56 == size);
    free(str);
  }

  return 0;
}
