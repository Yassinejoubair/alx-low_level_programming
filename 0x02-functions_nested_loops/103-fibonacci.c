#include <stdio.h>
/**
 * main - Prints the sum of even-valued Fibonacci sequence
 * terms not exceeding 4000000.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long a1 = 0, a2 = 1, sum;
	float fsum;

	while (1)
	{
		sum = a1 + a2;
		if (sum > 4000000)
		{
			break;
		}
		if ((sum % 2) == 0)
		{
			fsum += sum;
		}
		a1 = a2;
		a2 = sum;
	}
	printf("%.0f\n", fsum);
	return (0);
}
