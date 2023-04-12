#include "main.h"
#include <stdlib.h>
/**
 * argstostr - prints args
 * @av: height of grid
 * @ac: takes in width of grid
 * Return: the args one line
 */
char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, k = 0, c = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			c++;
			j++;
		}
		i++;
	}
	c = c + ac + 1;
	s = malloc(sizeof(char) * c);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			s[k] = av[i][j];
			k++;
		}
		s[k] = '\n';
		k++;
	}
	return (s);
}
