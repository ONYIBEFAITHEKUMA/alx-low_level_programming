#include "main.h"
/**
 * _isalpha - function that print the upper case
 *
 * @c: parameter is to be checked
 *
 * Return: 1 if its an alphabet, otherwise return 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
