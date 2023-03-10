#include "main.h"
/**
 * _puts - functions to be checked
 *
 * @str: Always 0 (success)
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
