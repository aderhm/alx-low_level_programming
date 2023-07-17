#ifndef DOG_H
#define DOG_H

/**
* struct dog - represents a dog and contains three members:
* @name: A pointer to a character array that stores the name of the dog.
* @age: Represents the age of the dog.
* @owner: A pointer to a character array that stores the name of the owner.
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
