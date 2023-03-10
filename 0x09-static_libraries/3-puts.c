#include "main.h"
/**
 * _puts - Entry point
 *
 * @str: input value
 *
 * Return: Always 0 (success)
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
