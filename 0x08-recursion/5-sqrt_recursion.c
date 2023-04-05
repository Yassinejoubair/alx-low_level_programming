#include "main.h"
#include <stdio.h>

/**
 * isquare - checks for the square root
 * @x: int
 * @y: int
 * Return: int
 */
int isquare(int x, int y)
{
	if (x * x == y)
	{
		return (x);
	}
	else if (x * x > y)
	{
		return (-1);
	}
	return (isquare(x + 1, y));
}
/**
 * _sqrt_recursion - the natural square root of a number
 * @n :int
 * Return: natural square root or -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (isquare(1, n));
}
