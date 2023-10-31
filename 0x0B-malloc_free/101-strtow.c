#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * strtow - a function that splits a string into words.
 * @str: is pointer
 * Return: funnction
 */
char **strtow(char *str)
{
	int i, j, k, l, m, words = 0, len = 0;
	char **arr;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		if ((str[i] == ' ' || str[i + 1] == '\0') && (i > 0 && str[i - 1] != ' '))
			words++;
	arr = malloc(sizeof(char *) * (words + 1));
	if (arr == NULL)
		return (NULL);
	if (words == 0)
	{
		arr[0] = malloc(sizeof(char));
		if (arr[0] == NULL)
			return (NULL);
		arr[0][0] = '\0';
		return (arr);
	}
	for (i = 0; str[i] != '\0' && k < words; i++)
		if (str[i] != ' ')
		{
			for (j = i; str[j] != ' ' && str[j] != '\0'; j++)
				len++;
			arr[k] = malloc(sizeof(char) * (len + 1));
			if (arr[k] == NULL)
			{
				for (; k >= 0; k--)
					free(arr[k]);
				free(arr);
				return (NULL);
			}
			for (l = i, m = 0; l < i + len; l++, m++)
				arr[k][m] = str[l];
			arr[k++][m] = '\0';
			i += len;
			len = 0;
		}
	arr[k] = NULL;
	return (arr);
}
