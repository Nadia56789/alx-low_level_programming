#ifndef DOG_H
#define DOG_H


/**
*struct dog - a new type of data
*representing a dog
*@name: dog name
*@age: dog age
*@owner: owner's name
*/

struct dog
{
	char *name;
	char *owner;
	float age;
};

/**
*my_dog - Typedef for struct dog
*/
typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
