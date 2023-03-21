#include "main.h"
/**
 * print_last_digit - last digit
 *
 * @n: The int to print
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	int ld;

	if (n < 0)
	{
		ld = (-1 * (n % 10));
		_putchar (ld + '0');
		return (ld);
	}
	else
	{
		ld = (n % 10);
		_putchar (ld + '0');
		return (ld);
	}

}
