#include <stdio.h>
/**
 */
int main(void)
{
	int i;
	char j;

	for (i = 0; i < 16; i++)
	{
		if (i >= 0 && i <= 9)
			j = i + 48;
		else
			j = i + 87;
		putchar(j);
	}
	putchar('\n');
	return (0);
}
