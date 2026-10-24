#ifndef CALC_H
#define CALC_H

/**
 * 3-calc.h - Header for the calculator program
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Defines the op_t structure and prototypes for the calculator.
 */

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
