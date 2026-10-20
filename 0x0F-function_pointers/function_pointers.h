#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/**
 * function_pointers.h - Prototypes for function pointer tasks
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Contains prototypes for the function pointer project.
 */

#include <stddef.h>

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
