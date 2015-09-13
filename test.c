
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "asprintf.h"

#define test(expected_size, fmt, ...) ({          \
  char *str = NULL;                               \
  int size = asprintf(&str, fmt, __VA_ARGS__);    \
  assert(str);                                    \
  assert(expected_size == size);                  \
  free(str);                                      \
})


int
main (void) {
  test(16, "this is a %s", "string");
  test(9, "%d + %d = %d", 1, 1, 2);
  test(
       56
     , "bradley likes %s, %s, %s, and %s"
     , "kinkajous", "bananas", "monkeys", "the beach"
  );
  return 0;
}
