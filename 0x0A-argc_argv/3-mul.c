#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: count
 * @argv: pointer of the string
 * Return: on success
 */
int main(int argc, char *argv[])
{
	int x;
	int y;
	int m;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	m = x * y;
	printf("%d\n", m);
	return (0);
}
