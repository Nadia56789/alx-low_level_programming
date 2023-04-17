#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>
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

#endif
