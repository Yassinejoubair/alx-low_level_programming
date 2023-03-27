#include "main.h"
/**
 * swap_int - Swaps the values of two integers
 *
 * @a: integer to swap
 * @b: another integer to swap
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
