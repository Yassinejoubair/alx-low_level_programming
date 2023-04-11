#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates array of char
 * @c: char
 * @size: size
 * Return: Null if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int x;

	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(char));
	if (s == NULL)
	{
		return (0);
	}
	for (x = 0; x < size; x++)
	{
		s[x] = c;
	}
	return (s);
}
