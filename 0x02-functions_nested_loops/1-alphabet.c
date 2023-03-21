#include"main.h"
/*
 * main - prints the alphabets
 *
 * Return:0 on success
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
