#include <stdio.h>
/**
 * main - program should print a number, followed by a new line
 * @argc: variable
 * @argv: variable
 * Return: return 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
