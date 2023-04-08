#include "main.h"
/**
 * _atoi - convert string to an integer
 *
 * @s: input
 *
 * Return: on success
 */
int _atoi(char *s)
{
	int n = 0;
	unsigned int k = 0;
	int m = 1;
	int i = 0;

	while (s[n])
	{
		if (s[n] == 45)
		{
			m *= -1;
		}

		while (s[n] >= 48 && s[n] <= 57)
		{
			i = 1;
			k = (k * 10) + (s[n] - '0');
			n++;
		}

		if (i == 1)
		{
			break;
		}

		n++;
	}

	k *= m;
	return (k);
}
