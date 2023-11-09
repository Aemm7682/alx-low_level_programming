#include "function_pointers.h"
/**
 * print_name - to print name
 * @name: is the name
 * @f: is function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
