#ifndef FUNCTION_POINTRES_H
#define FUNCTION_POINTERS_H

#include <sddef.h>
#include <stdlib.h>

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int _putchar(char c);
int int_index(int *array, int size, int (*cmp)(int));
int (*get_op_func(char *s))(int, int);

#endif
