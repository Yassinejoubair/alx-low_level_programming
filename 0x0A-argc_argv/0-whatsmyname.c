#include<stdio.h>
/**
 * main - entry point
 * @argc - count
 * @argv - pointer to string
 * Return : Always return 0
 */
int main(int argc, char *argv[])
{
	int c;
	for (c = 0; c < argc; c++)
	{
		printf("%s",argv[c]);
	}
	printf("\n");
	return (0);
}
