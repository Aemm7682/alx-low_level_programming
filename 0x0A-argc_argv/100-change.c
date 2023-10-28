#include <stdio.h>
#include <stdlib.h>
/**
 * main - function to get the change
 * @argc: var
 * @argv: array
 * Return: 1 or zero
 */
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i, no_of_cent = 0, money;
		int cent[] = {25, 10, 5, 2, 1};

		money = atoi(argv[1]);

		for (i = 0 ; i < 5 ; i++)
		{
			if (money >= cent[i])
			{
				no_of_cent += money / cent[i];
				money = money % cent[i];
				if (money % cent[i] == 0)
					break;
			}
		}
		printf("%d\n", no_of_cent);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
