#include "main.h"
#include<string.h>
/**
 * puts_half - prints half of a string
 *
 * @str: input
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int ln = strlen(str);
	int start = (ln % 2 == 0) ? ln / 2 : (ln - 1) / 2 + 1;

			for (i = start; i < ln; i++)
			{
			_putchar(str[i]);
			}
			_putchar('\n');
}
