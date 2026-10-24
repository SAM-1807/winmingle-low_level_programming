/**
 * 3-op_functions - Basic arithmetic operations
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Implements addition, subtraction, multiplication,
 * division, and modulo.
 */

#include "3-calc.h"

/**
 * op_add - Adds two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: The sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: The difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: The product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: The result of a divided by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Calculates the modulo of two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: The remainder of a divided by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
