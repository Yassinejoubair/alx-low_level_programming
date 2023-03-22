#include <stdio.h>
/**
 * main - Prints the first 98 Fibonacci numbers, starting with
 * 1 and 2, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long a1 = 0, a2 = 1, sum;
	unsigned long b1, b2, c1, c2;
	unsigned long d1, d2;
	for (count = 0; count < 92; count++)
	{
		sum = a1 + a2;
		printf("%lu, ", sum);

		a1 = a2;
		a2 = sum;
	}
	b1 = a1 / 10000000000;
	b1 = a2 / 10000000000;
	c1 = a1 % 10000000000;
	c2 = a2 % 10000000000;

	for (count = 93; count < 99; count++)
	{
		d1 = b1 + c1;
		d2 = b2 + c2;
		if (b1 + c2 > 9999999999)
		{
			d1 +=1;
			d2 %=10000000000;
		}
		printf("%lu%lu", d1, d2);
		if (count != 98)
		{
			printf(", ");
		}
		b1 = c1;
		b2 = c2;
		c1 = d1;
		c2 = d2;
	}
	printf("\n");
	return (0);
}
