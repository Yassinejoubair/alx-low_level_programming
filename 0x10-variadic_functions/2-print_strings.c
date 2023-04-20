#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings
 * @separator: delimiter
 * @n: args
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list argm;
	unsigned int c;
	char *cv;

	va_start(argm, n);

	for (c = 0; c < n; c++)
	{
		cv = va_arg(argm, char*);
		if (cv != NULL)
			printf("%s", cv);
		else
			printf("%p", cv);
		if (separator != NULL && c < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(argm);
}
