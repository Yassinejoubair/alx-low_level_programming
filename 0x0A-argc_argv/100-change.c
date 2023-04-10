#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make change
 * @argc: count
 * @argv: pointer of string
 * Return: on succecss
 */
int main(int argc, char *argv[])
{
	int cents;
	int coins[5] = {25, 10, 5, 2, 1};
	int nc = sizeof(coins) / sizeof(coins[2]);
	int i;
	int co = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < nc; i++)
	{
		while (cents >= coins[i])
		{
			co++;
			cents -= coins[i];
		}
	}
	printf("%d\n", co);
	return (0);
}
