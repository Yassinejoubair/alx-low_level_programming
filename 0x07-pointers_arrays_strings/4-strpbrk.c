#include "main.h"
#include <stdlib.h>
/**
 * _strpbrk - function locates the first occurrence in the string
 * @s: string
 * @accept: bytes
 * Return: pointer to the bytes
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;

	while (*s)
	{
		for (p = accept; *p; p++)
		{
			if (*s == *p)
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
