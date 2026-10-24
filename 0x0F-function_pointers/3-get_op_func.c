/**
 * 3-get_op_func - Selects the correct math function
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Returns a pointer to the function matching the operator.
 *
 * Return: Pointer to the function, or NULL if not found
 */

#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - Selects the correct function to perform the operation
 * @s: The operator passed as argument
 *
 * Return: Pointer to the function matching the operator, or NULL
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (ops[i].op[0] == s[0])
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
