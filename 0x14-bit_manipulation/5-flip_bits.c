#include "main.h"
/**
 * flip_bits - function that counts the number of bit to be changed
 *
 * @n: first number
 *
 * @m: second number
 *
 * Return: numbers of bit to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusion = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusion >> 1;
		if (current & 1)
			count++;
	}
	return (count);
}
