#include<stdlib.h>
#include<stdio.h>
/**
 * main- Entry point
 *
 * Return : 0 on success
 */
int main(void)
{
	char alphab;

	for (alphab = 'a'; alphab < 'z'; alphab++)
	{
		putchar(alphab);
	}
	
	putchar('\n');
	
	return(0);
}
