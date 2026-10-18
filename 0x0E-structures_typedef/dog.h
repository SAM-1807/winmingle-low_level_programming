/**
 * dog.h - Defines struct dog and its typedef
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Defines struct dog with name, age, and owner fields,
 * and typedef dog_t as an alias.
 */

#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A dog's basic information
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
