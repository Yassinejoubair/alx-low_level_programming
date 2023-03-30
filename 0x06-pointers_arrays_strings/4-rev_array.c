#include "main.h"
/**
 * reverse_array - reversing array
 * @a: input
 * @n:input
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		int t = a[i];

		a[i] = a[j];
		a[j] = t;
	}
}
