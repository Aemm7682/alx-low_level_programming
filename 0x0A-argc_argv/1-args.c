#include <stdio.h>
/**
 * main - function
 * @argc: variable
 * @argv: array
 * Return: return
 */
int main(int argc, char *argv[])
{
	(void) *argv[];

	printf("%d\n", argc - 1);
	return (0);
}
