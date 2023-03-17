#include<stdio.h>
#include<stdlib.h>
/**
 * main -Entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	 int a, b, c;

	 for (a = 0; a < 10; a++)
	 {
		  for (b = i + 1; b < 10; b++)
		  {
			  for (c = j + 1; c < 10; c++)
			  {
				  if (a != b && a != c && b != c)
				  {
					   putchar(a + '0');
					   putchar(b + '0');
					   putchar(c + '0');
					   if (a < 7)
					   {
						   putchar(',');
						   putchar(' ');
					   }
				  }
			  }
		  }
	 }
putchar('\n');
return (0);
}
