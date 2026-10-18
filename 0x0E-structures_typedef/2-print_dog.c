/**
 * 2-print_dog - Prints a struct dog
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Prints the elements of a struct dog.
 *
 * Return: Nothing
 */

#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the elements of struct dog
 * @d: Pointer to the struct dog
 *
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
