#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: A program that prints the opcodes of its own main function.
 * Usage: ./main number_of_bytes
 * @argc: argument counter
 * @argv: argument vector
 * Return: Always Successful
*/

int main(int argc, char *argv[])
{
	char *opc = (char *) main;
	int i, nb;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nb = atoi(argv[1]);

	if (nb < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < nb; i++)
	{
		printf("%02x", opc[i] & 0xFF);
		if (i != nb - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
