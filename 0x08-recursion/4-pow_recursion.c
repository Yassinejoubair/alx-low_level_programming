#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion -  the power
 * @x: int
 * @y: int
 * Return: -1 if y < 0 - int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}
}
