#include "main.h"
/**
 * print_binary - function thayt print binary numbers.
 *
 * @n: unsignened long int.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	(n & 1) ? _putchar('1') : _putchar('0');
}
