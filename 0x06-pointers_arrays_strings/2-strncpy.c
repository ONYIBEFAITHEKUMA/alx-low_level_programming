#include "main.h"
/**
 * _strncpy - functions that copies a strings
 *
 * @dest: destination to be checked
 *
 * @src: sources to be copied
 *
 * @n: parameter to be checked
 *
 * Return: always dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}

