/**
 * 1-init_dog - Initializes a struct dog
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Initializes the fields of a struct dog.
 *
 * Return: Nothing
 */

#include "dog.h"
#include <stddef.h>

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to the struct dog
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
