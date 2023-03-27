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
	int sign = 1;
	int number = 0;
	int start = 0;

	while (*s != '\0')
	{
		if (*s == '-' && !start)
		{
			sign = -1;
		}
		else if (*s == '+' && !start)
		{
			sign = 1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			number = number * 10 + (*s - '0');
			start = 1;
		}
		else if (start)
		{
			break;
		}
		s++;
	}
	return (sign * number);
}
