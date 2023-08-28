#include <stdio.h>
#include "dog.h"
/**
 * print_dog - function to print struct
 * @d: is struct pointer
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name :%s\n", d->name ? d->name : "(nil)");
		printf("age :%f\n", d->age);
		printf("Owner:%s\n", d->owner ? d->owner : "(nil)");
	}
}
