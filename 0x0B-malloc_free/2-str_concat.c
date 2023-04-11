#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenates two strings
 * @s1: string
 * @s2: string
 * Return: On Success
 */
char *str_concat(char *s1, char *s2)
{
	char *p_str;
	int x;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	x = strlen(s1) + strlen(s2) + 1;
	p_str = (char *)malloc(x * sizeof(char));
	if (p_str == NULL)
	{
		return (NULL);
	}
	strcpy(p_str, s1);
	strcat(p_str, s2);
	return (p_str);
}
