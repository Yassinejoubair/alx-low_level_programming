#include"main.h"
/**
 * print_alphabet - printing alphabet
 *
 * Return : 0 on success
 */
void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		_putchar(c);
	}
	_putchar('\n');
}
