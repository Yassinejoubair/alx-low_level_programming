#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 *  _strdup - returns a pointer to a new string
 *  @str: string
 *  Return: Null
 */
char *_strdup(char *str)
{
	char *p_str;
	int x;

	if (str == NULL)
		return (NULL);
	x = strlen(str) + 1;
	p_str = (char *)malloc(x * sizeof(char));
	if (p_str == NULL)
	{
		return (NULL);
	}
	strcpy(p_str, str);
	return (p_str);
}
