#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 *
 */
int _strlen(char *str)
{
	int size;
	for (size = 0; str[size] != '\0'; size++)
		;
	return (size);
}
/**
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{

