#include<stdlib.h>
#include<stdio.h>
/**
 * main - Entry point
 * 
 * Return: 0 on success
 */
int main(void)
{
	int i ;

	for (i = 0 ; i < 10 ; i++)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
