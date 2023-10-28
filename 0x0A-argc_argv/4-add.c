#include <stdio.h>
#include <stdlib.h>
/**
 * main - program should print a number, followed by a new line
 * @argc: variable
 * @argv: variable
 * Return: return 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	char *c;
	int i;

	for (i = argc - 1 ; i > 0 ; i--)
	{
		for (c = argv[i] ; *c != '\0' ; c++)
			if (*c < '0' || *c > '9')
			{
				printf("Error\n");
				return (1);
			}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
