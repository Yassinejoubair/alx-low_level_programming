#include "main.h"
/**
 * *leet - encodes a string
 *
 * @str: input
 * Return: result
 */
char *leet(char *str)
{
	char *result = str;
	char *letters = "aeotlAEOTL";
	char *replace = "4307143071";
	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
				result[i] = replace[j];
				break;
			}
		}
	}
	return (result);
}
