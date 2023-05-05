#include <stdio.h>

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 * @n: number one.
 * @m: number two.
 *
 * Return: number of bits.
 */
int get_endianness(void)
{
    int x = 1;
    char *c = (char *)&x;
    return (*c == 1);
}

