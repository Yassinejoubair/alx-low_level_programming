#include <stdio.h>
#include"main.h"
/**
 * count - return lenght of string
 * @c: char
 * Return: int
 */

int count(char *c)
{
	if (*c == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + count(c + 1));
	}
}

/**
 * ispali - checks palindrome or not
 * @x: int
 * @y: int
 * @i: char
 * Return: 1 or 0
 */

int ispali(int x, int y, char *i)
{
	if (x >= y)
	{
		return (1);
	}
	else if (i[x] != i[y])
	{
		return (0);
	}
	else
	{
		return (ispali(x + 1, y - 1, i));
	}
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: char
 * Return: 1 if palindrome - 0 if not
 */

int is_palindrome(char *s)
{
	int t;

	t = count(s) - 1;
	return (ispali(0, t, s));
}
