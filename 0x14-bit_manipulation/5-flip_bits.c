#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to be
 *             flipped to get from one number to another.
 * @n: The number.
 * @m: The number to flip n to.
 *
 * Return: The necessary number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_r = n ^ m;
	unsigned int c = 0;

	while (xor_r != 0)
	{
		c += xor_r & 1;
		xor_r >>= 1;
	}
	return (c);
}
