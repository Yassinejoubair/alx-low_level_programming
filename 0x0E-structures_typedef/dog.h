#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog's info
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_st - type def for struct dog
 */
typedef struct dog dog_st;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_d(struct dog *d);
dog_st *new_dog(char *name, float age, char *owner);
void free_dog(dog_st *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
