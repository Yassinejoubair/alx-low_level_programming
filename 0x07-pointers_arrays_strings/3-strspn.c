#include"main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s : string
 * @accept :bytes
 *
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
		unsigned int b = 0;
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (accept[a] == *s)
			{
				b++;
				break;
			}
			else if ((accept[a + 1]) == '\0')
				return (b);
		}
		s++;
	}
	return (b);
}
