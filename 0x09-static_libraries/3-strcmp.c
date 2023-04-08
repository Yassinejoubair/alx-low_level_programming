#include "main.h"
/**
 * _strcmp - compares two strings
 *
 * @s1: input
 * @s2: another input
 *
 * Return: 0 on success
 */
int _strcmp(char *s1, char *s2)
{
	int k;

	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			break;
		}
		s1++;
		s2++;
	}
	k = *s1 - *s2;
	return (k);
}
