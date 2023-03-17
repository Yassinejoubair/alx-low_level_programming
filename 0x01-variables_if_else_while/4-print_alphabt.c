#include<stdlib.h>
#include<stdio.h>
/* main - Entry point
 *
 * Return: 0 on success
 *
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z'; ++ch)
	{
		if ((ch == 'q' || ch == 'e') !== 0)
		{
			putchar(ch);
		}
	}
	return (0);
