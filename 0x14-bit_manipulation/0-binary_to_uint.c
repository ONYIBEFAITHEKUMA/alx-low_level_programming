#include "main.h"
/**
 * binary_to_uint - function that convert binary number to usigned int.
 *
 * @b: value
 *
 * Return: return the conerted numberor 0, if b = NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int val = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		val = 2 * val + (b[i] - '0');
	}
	return (val);

}
