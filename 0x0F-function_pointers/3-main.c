#include "calc.h"
/**
 * main - entry point
 * @argc: number of argment
 * Return: 0
 */
int main(int argc, char **argv)
{
	int (*op_funs)(int, int);
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op_funs = get_op_func(argv[2]);
	if (!op_funs)
	{
		printf("Error\n");
		exit(99);
	}
	if (!b && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100)
	}
	printf("%d\n", op_funs(a, b));
	return (0);
}
