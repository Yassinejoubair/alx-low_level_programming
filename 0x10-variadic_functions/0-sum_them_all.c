#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - sum of all its parameters
 * @n: args
 * Return: sum or if n == 0, return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int s = 0;
	  unsigned int i;

	va_list argm;

	if (n)
	{
		va_start(argm, n);
		for (i = 0; i < n; i++)
		{
			s += va_arg(argm, int);
		}
		va_end(argm);
	}
	return (s);
}
