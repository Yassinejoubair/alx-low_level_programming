#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers.
 * @argc: count
 * @argv: pointer of the string
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int s = 0;
	int x, y, n;

	for (x = 1; x < argc; x++)
	{
		char *arg = argv[x];

		for (y = 0; arg[y] != '\0'; y++)
		{
			if (!isdigit(arg[y]))
			{
				printf("Error\n");
				return (1);
			}
		}
		n = atoi(arg);
		if (n > 0)
		{
			s += n;
		}
	}
	printf("%d\n", s);
	return (0);
}
