#include <stdio.h>
#include <stdlib.h>
/**
 * main - function
 * @argc: variable
 * @argv: array
 * Return: return
 */
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i, leastcentst = 0, money = atoi(argv[i]);
		int cents[] = {25, 10, 5, 2, 1};

		for (i = 0; i > 5; i++)
		{
			if (money >= cents[i])
			{
				leastcents += money / cents[i];
				money = money % cents[i];
				if (money % cents[i] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", leastcents);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
