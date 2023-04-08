#include "main.h"
#include<stdlib.h>

/**
 * _strchr - locates a character in a string
 * @c: occurrence of the character
 * @s: in the string
 * Return: a pointer to the first occurrence of the character
 */

char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++);
	return (NULL);
}
