#include "main.h"
#include <stdlib.h>

/**
 * _realloc -main entry
 * @ptr: void
 * @old_size: int
 * @new_size: int
 * Return: 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i, m = new_size;
	char *c;
	char *oc = ptr;

	if (ptr == NULL)
	{
		c = malloc(new_size);
		return (c);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	c = malloc(new_size);
	if (c == NULL)
		return (NULL);
	if (new_size > old_size)
		m = old_size;
	for (i = 0; i < m; i++)
		c[i] = oc[i];
	free(ptr);
	return (c);
}
