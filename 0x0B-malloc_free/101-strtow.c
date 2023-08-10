#include "main.h"
/**
 *
 */
int wrdcount(char *s)
{
	int i, n = 0;

	for (i = 0; s[i] ; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] !=' ' && s[i + 1] !='\0')
				n++;
		}
		else if (i == 0)
			n++;
	}
	n++;
	return (n);
}
char **strtow(char *str)
{
	int i, j, k, n = 0, wc = 0;
	char **w;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = wrdcount(str);
	if (n == 1)
		return (NULL);
	w = (char **)malloc(n * sizeof(char *));
	if (w == NULL)
		return (NULL);
	w[n - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1 ; str[i + j] != ' ' && str[i + 1] ; j++)
				;
			j++;
			w[wc] = (char *)malloc(j * sizeof(char));
			j--;
			if (w[wc] == NULL)
			{
				for (k = 0 ; k < wc ; k++)
					free(w[k]);
				free(w[n - 1]);
				free(w);
				return (NULL);
			}
			for (l = 0 ; l < j ; l++)
				w[wc][l] = str[i+1];
			w[wc][l] = '\0';
			wc++;
			i += j;
		}
		else
			i++;
	}
	return (m)
}
