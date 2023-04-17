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
	int t;
	unsigned int dec = 0;

	if (!b)
		return (0);
	for (t = 0; b[t]; t++)
	{
		if (b[t] < '0' || b[t] > '1')
			return (0);
		dec = 2 * dec + (b[t] - '0');
	}
	return (dec);

}
