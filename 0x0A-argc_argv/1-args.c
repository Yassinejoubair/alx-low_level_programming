#include<stdio.h>
#include<stdlib.h>
/**
 * main -prints the number of arguments passed into it
 * @argc: count
 * @argv: pointer of the string
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	argv[0] = 0;
	return (0);
}
