#include<stdio.h>
#include<stdlib.h>
/**
 * main -prints all arguments it receives.
 * @argc: count
 * @argv: pointer of the string
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
