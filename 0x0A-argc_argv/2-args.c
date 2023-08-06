#include <stdio.h>
/**
 * main - function
 * @argc: variable
 * @argv: array
 * Return: return
 */
int main(int argc, char *argv[])
{
	int i = 0;
	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
