#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determine if the number is positive, negative or zero
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
		printf("%d is %s\n", n, "Positive");
	}
	if (n < 0)
	{
		printf("%d is %s\n", n, "Negative");
	}
	if (n == 0)
	{
		printf("%d is %s\n", n, "Zero");
	}	
	return (0);
}
