#include "main.h"
/**
 * _isdigit - function that print isdigit
 * @c: parameter to be checked
 * Return: 1 on succes, 0 on fail
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
