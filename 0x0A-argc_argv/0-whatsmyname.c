#include<stdio.h>
/**
 * main - prints its name, followed by a new line.
 * @argc: count
 * @argv: pointer to the string
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int c;

	for (c = 0; c < argc; c++)
	{
		printf("%s", argv[c]);
	}
	printf("\n");
	return (0);
}
