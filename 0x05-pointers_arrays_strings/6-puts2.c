#include "main.h"
#include <string.h>
/**
 * puts2 - prints every other character
 *
 * @str: input
 *
 * Return:void
 */
void puts2(char *str)
{
	int i = 0;
	int ln = strlen(str);

	for (i = 0; i < ln; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
