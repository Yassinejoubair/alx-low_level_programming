#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copy a string
 *
 * @dest: destination value
 * @src: source value
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	while (*src != '\0')
	{
		*p++ = *src++;
	}
	*p = '\0';
	return (dest);
}
