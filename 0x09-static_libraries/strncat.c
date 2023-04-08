#include "main.h"
/**
 * _strncat - concatenate more strings
 *
 * @dest: destination
 * @src: source
 * @n: input
 * Return: 0 on success
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	char *p = dest;

	while (*p)
	{
		p++;
	}
	while (*src && i < n)
	{
		*p++ = *src++;
		i++;
	}
	*p = '\0';
	return (dest);
}
