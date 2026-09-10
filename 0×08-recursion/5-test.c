#include <stdio.h>
#include "main.h"

int main(void)
{
	printf("%d\n", _sqrt_recursion(64));
	printf("%d\n", _sqrt_recursion(25));
	printf("%d\n", _sqrt_recursion(10));
	printf("%d\n", _sqrt_recursion(0));
	printf("%d\n", _sqrt_recursion(-1));
	return(0);
}
