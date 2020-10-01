asprintf.c
==========

asprintf() implementation

## Install

```sh
$ clib install littlstar/asprintf.c
```

## Usage

```c
#include <asprintf.h>
```

or

```c
#include <asprintf/asprintf.h>
```

## Example

```c

char *str = NULL;
char *fmt = "this is a %s";
int size = asprintf(&str, fmt, "string");

printf("%s\n", str); // this is a string
printf("%d\n", size); // 16

```

## license

MIT
