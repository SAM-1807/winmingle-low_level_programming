/**
 * 4-new_dog - Creates a new dog
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Allocates and initializes a new dog, copying name and owner.
 *
 * Return: Pointer to the new dog, or NULL on failure
 */

#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creates a new dog
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner
 *
 * Return: Pointer to the new dog, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	int len_name;
	int len_owner;
	int i;

	if (name == NULL || owner == NULL)
		return (NULL);

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);

	for (len_name = 0; name[len_name] != '\0'; len_name++)
		;
	new->name = malloc(sizeof(char) * (len_name + 1));
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len_owner = 0; owner[len_owner] != '\0'; len_owner++)
		;
	new->owner = malloc(sizeof(char) * (len_owner + 1));
	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}

	for (i = 0; i <= len_name; i++)
		new->name[i] = name[i];
	for (i = 0; i <= len_owner; i++)
		new->owner[i] = owner[i];

	new->age = age;
	return (new);
}
