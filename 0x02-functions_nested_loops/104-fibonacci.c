#include <stdio.h>
/**
 * main - Prints the first 98 Fibonacci numbers, starting with
 * 1 and 2, separated by a comma followed by a space.
 *
 *  Return: Always 0.
 */
int main() 
{
	int i;
	unsigned int a = 1, b = 2, c;
	printf("%u, %u, ", a, b);
	for (i = 2; i < 98; i++)
	{
		c = a + b;
	
	 printf("%u", c);
	 if (i != 97)
	 {
		 printf(", ");
	 }
	  a = b;
	  b = c;
	}
	printf("\n");

	return 0;
}
