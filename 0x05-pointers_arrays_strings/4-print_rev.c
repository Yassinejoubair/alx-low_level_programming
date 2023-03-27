#include "main.h"
#include <string.h>
#include<stdio.h>
/**
 * print_rev - prints string in reverse
 *
 * @s: input
 *
 * Return: void
 */
void print_rev(char *s)
{
	int ln = strlen(s);
	int i;

	for (i = ln - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
