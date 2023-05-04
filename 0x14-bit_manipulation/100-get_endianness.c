#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: If big-endian - 0.
 *         If little-endian - 1.
 */
int get_endianness(void)
{
	short int n = 0x01;
	char *p = (char *)&n;

	if (*p == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
