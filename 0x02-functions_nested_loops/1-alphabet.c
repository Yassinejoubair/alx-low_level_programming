#include"main.h"
/*
 * main - prints the alphabets
 *
 * 
 */
void print_alphabet(void)
{
	int c;

	for (c = 'a'; c < 'z'; ++c)
	{
		_putchar(c);
	}
	_putchar('\n');
}
