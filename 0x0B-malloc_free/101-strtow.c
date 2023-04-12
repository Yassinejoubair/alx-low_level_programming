#include "main.h"
#include <stdlib.h>
/**
 * fgc -frees a 2 dimensional array
 * @h: height of the array
 * @g: multidimensional array of char
 * Return: no return
 */
void fgc(char **g, unsigned int h)
{
	if (g != NULL && h != 0)
	{
		for (; h > 0; h--)
			free(g[h]);
		free(g[h]);
		free(g);
	}
}
/**
 * strtow - splits a string into words
 * @str: string
 * Return: pointer of an array of integers
 */
char **strtow(char *str)
{
	char **p;
	unsigned int c, h, i, j, a1;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = h = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			h++;
	p = malloc((h + 1) * sizeof(char *));
	if (p == NULL || h == 0)
	{
		free(p);
		return (NULL);
	}
	for (i = a1 = 0; i < h; i++)
	{
		for (c = a1; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				a1++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				p[i] = malloc((c - a1 + 2) * sizeof(char));
				if (p[i] == NULL)
				{
					fgc(p, i);
					return (NULL);
				}
break;
			}
		}
		for (j = 0; a1 <= c; a1++, j++)
			p[i][j] = str[a1];
		p[i][j] = '\0';
	}
	p[i] = NULL;
	return (p);
}
