#include "main.h"
/**
 * isprime - checks if n prime number
 * @n: int
 * @x: int
 * Return: 1 if n prime number - 0 if otherwise
 */

int isprime(int n, int x)
{
	if (x <= 1)
	{
		return (1);
	}
	if (n % x == 0)
	{
		return (0);
	}
	return (isprime(n, x - 1));
}

/**
 * is_prime_number - returns 1 or 0
 * @n: int
 * Return: prime number or not
 */

int is_prime_number(int n)
{
	int x = n / 2;

	if (n <= 1)
	{
		return (0);
	}
	return (isprime(n, x - 1));
}
