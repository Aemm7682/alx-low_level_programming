#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initiate struct
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
