#include "main.h"
/**
 * is_num - function to check the number
 * main - is enrty point
 * @s: is argumnet
 * Return: return value
 */
int is_num(char *s)
{
	int i = 0;

	for (; s[i] != '\0' ; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
	}
	return (1);
}
/**
 * main - entry point
 * @argc: is the argument
 * @argv: is argument
 * Return: to return value
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (!is_num(argv[1]) || !is_num(argv[2]))
	{
		printf("Error\n");
		return (98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	printf("%d\n", num1 * num2);
	return (0);
}
