#include "dog.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * *_strp - return a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: string
 * Return: 0
 */

char *_strp(char *str)
{
	int i = 0, size = 0;
	char *x;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
		;
	/*+1 on the size puts the end of string character*/
	x = malloc(size * sizeof(*str) + 1);
	if (x == 0)
	{
		return (NULL);
	}
	else
	{
		for (; i < size; i++)
			x[i] = str[i];
	}
	return (x);
}
/**
 * *new_dog - create a new dog
 * @name: string for name
 * @age: integer for age
 * @owner: string for owners
 * Return: a dog or NULL
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *bobby;

	bobby = malloc(sizeof(struct dog));
	if (bobby == NULL)
		return (NULL);
	bobby->name = _strp(name);
	if (bobby->name == NULL)
	{
		free(bobby);
		return (NULL);
	}
	bobby->owner = _strp(owner);
	if (bobby->owner == NULL)
	{
		free(bobby->name);
		free(bobby);
		return (NULL);
	}
	bobby->age = age;
	return (bobby);
}
