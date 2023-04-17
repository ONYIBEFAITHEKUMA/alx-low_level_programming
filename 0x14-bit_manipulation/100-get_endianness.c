#include "main.h"
/**
 * get_endianness - functions that check endianness
 *
 * Return: return 1 if big endian or -1 if little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}

