#include "main.h"
#include <stdlib.h>
/**
 * _calloc -main entry
 * @nmemb: int
 * @size: int
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *c;

	if (nmemb == 0 || size == 0)
		return (NULL);
	c = malloc(nmemb * size);
	if (c == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		c[i] = 0;
	return (c);
}
