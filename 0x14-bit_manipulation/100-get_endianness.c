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
    int y = 1;
    char *c = (char *)&y;
    return (*c == 1);
}

