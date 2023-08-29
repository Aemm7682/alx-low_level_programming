#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - to check the length of the string
 * @str: the array
 * Return: return the size
 */
int _strlen(char *str)
{
	int size;

	for (size = 0; str[size] != '\0'; size++)
		;
	return (size);
}
/**
 * _strcopy - function to copy between string
 * @dest: copied sting
 * @src: string to copy
 * Return: return dest
 */
char *_strcopy(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] ; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
 * new_dog - function to copy string
 * @name: is the name
 * @age: is the age
 * @owner: the owner
 * Return: return dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);
	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog)
		return (NULL);
	dog->name = malloc((_strlen(name) + 1) * (sizeof(char)));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc((_strlen(owner) + 1) * (sizeof(char)));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner);
	return (dog);
}
