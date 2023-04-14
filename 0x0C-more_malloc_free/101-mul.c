#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * main -  multiplies two positive numbers
 * @argc: count
 * @argv: poiter to string
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i, j;
	unsigned long m;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	m = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", m);
	return (0);
}
