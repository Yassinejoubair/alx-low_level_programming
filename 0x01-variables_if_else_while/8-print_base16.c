#include<stdlib.h>
#include<stdio.h>
/**
 * main - Entry point
 *    
 * Return : 0 On Succes
 */
int main(void)
	{
	int i;
	char c;

	for (i = 0 ; i < 10 ; i++)
	{
		putchar(i + '0');
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
