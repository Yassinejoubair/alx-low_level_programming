#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determine if a random number is positive, negative or zero
 *
 * return: 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is %s\n", n, "positive");
	}
	if (n < 0)
	{
		printf("%d is %s\n", n, "negative");
	}
	if (n == 0)
	{
		printf("%d is %s\n", n, "zero");
	}
	return (0);
}
