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


#endif
