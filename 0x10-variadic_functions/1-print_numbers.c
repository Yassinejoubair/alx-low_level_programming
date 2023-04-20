#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: delimiter
 * @n: args
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list argm;
	unsigned int a;

	va_start(argm, n);
	if (n != 0)
	{
		for (a = 0; (a < n - 1); a++)
		{
			if (separator != NULL)
			{
				printf("%d%s", va_arg(argm, int), separator);
			}
			else
			{
				printf("%d", va_arg(argm, int));
			}
		}
		printf("%d", va_arg(argm, int));
		 va_end(argm);
	}
	printf("\n");
}
