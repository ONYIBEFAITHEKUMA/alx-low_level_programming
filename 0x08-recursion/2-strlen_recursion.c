#include "main.h"

/**
 * _strlen_recursion - check lenght of a string
 *
 * @s: parameters to be checked
 *
 * Return: always 0
 */
int _strlen_recursion(char *str)
{
	if (*str == '\0' )
	{
		return (1 + _strlen_recursion(str + 1));
	}
	else
	{
		return (0);
	}
}
