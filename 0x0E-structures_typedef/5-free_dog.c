/**
 * 5-free_dog - Frees a dog
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Frees memory allocated for a dog.
 *
 * Return: Nothing
 */

#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees a dog
 * @d: Pointer to the dog to free
 *
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
