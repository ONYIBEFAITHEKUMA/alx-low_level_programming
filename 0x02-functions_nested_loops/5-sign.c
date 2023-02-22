#include "main.h"

/**
 * print_sign - function that prints sign
 *
 * @n: function parameter
 *
 * Return: if 1, else if 0, else -1
 */
int print_sign(int n)
{
	if (n > 1)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
