#include "main.h"
/**
*flip_bits - gets the number of bits to flip to get from n to m
*@n: initial number
*@m: final number
*
*Return: the number of flipped bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

unsigned long int str = n ^ m;

unsigned int cpt = 0;

while (str)
{
cpt += str & 1;
str = str >> 1;
}

return (cpt);
}

