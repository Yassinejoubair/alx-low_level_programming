#include<stdio.h>
#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: int
 * Return:-1 if n < 0 - 1 if n = 0 - a if n > 0
 */
int factorial(int n)
{
	int a;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	if (n > 0)
	{
		a = n * factorial(n - 1);
	}
	return (a);
}
