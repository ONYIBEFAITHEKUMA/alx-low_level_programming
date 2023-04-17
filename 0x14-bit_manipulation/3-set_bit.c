#include "main.h"

/**
 * set_bit - function that set the value of bit to -1 at a given index
 *
 * @n: long unsigned int
 *
 * @index: index of a bit
 *
 * Return: returns the value of bit
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63 || !1)
		return (-1);

	(*n |= 1 << index);
	return (1);
}
