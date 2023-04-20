#include "variadic_functions.h"
/**
* print_all - print char, integer, float and string
* @format: format
* Return: void
*/

void print_all(const char * const format, ...)
{
	va_list li;
	unsigned int i = 0, st = 0;
	char *p;

	va_start(li, format);
	while (format && format[i] != '\0')
	{
		switch (format[i])
		{ case 'c':
			switch (st)
			{ case 1: printf(", "); }
			st = 1;
			printf("%c", va_arg(li, int));
			break;
			case 'i':
			switch (st)
			{ case 1: printf(", "); }
			st = 1;
			printf("%i", va_arg(li, int));
			break;
		case 'f':
			switch (st)
			{ case 1: printf(", "); }
			st = 1;
			printf("%f", va_arg(li, double));
			break;
		case's':
			switch (st)
			{ case 1: printf(", "); }
			st = 1;
			p = va_arg(li, char*);
			if (p)
			{printf("%s", p);
			break; }
			printf("%p", p);
			break;
		}
			i++;
	}
	printf("\n");
	va_end(li);
}
