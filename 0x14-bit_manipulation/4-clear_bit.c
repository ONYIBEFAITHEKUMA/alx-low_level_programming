#include "main.h"
/**
 * clear_bit - function that set the value of bit to 0 at a given index
 *
 * @n: long usigned int
 *
 * @index: index of the bit clear
 *
 * Return: return 1 if  worked or -1 if wrong
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
