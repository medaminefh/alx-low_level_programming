#ifndef MY_HEADER_FILE
#define MY_HEADER_FILE
void print_name(char *name, void (*f)(char *));
#include <stddef.h>
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
#endif
