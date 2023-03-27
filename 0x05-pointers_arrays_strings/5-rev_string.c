#include "main.h"
#include <string.h>
/**
 * rev_string - reverse string
 *
 * @s: input
 *
 * Return: void
 */
void rev_string(char *s)
{
	int ln = strlen(s);
	int i;

	for (i = 0; i < ln / 2; i++)
	{
		char t = s[i];

		s[i] = s[ln - i - 1];
		s[ln - i - 1] = t;
	}
}
