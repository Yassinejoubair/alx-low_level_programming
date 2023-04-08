#include "main.h"
/**
 * *_strcat - concatenate two strings
 *
 * @dest: destination
 * @src: source
 *
 * Return: 0 on success
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p)
	{
		p++;
	}
	while (*src)
	{
		*p++ = *src++;
	}
	*p = '\0';
	return (dest);
}
