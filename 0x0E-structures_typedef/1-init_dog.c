#include <stdio.h>
#include "dog.h"
/**
 * inti_dog - function
 * @d: dog to inite
 * @name: dog name
 * @age: age
 * @owner:owner
 * Return: Void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
