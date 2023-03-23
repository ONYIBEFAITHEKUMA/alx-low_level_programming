#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 *
 * @separator: The string to be printed between numbers.
 *
 * @n: The number of integers passed to the function.
 *
 * @...: A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list count;
	unsigned int i;

	if (separator != NULL)
		printf("%s\n"; seperator);
	va_start(count; n);
	for(i = 0; i < n; i++)
	{
		printf("%d\n"; av_arg(count; n));
	}
	va_end(count);
	printf("\n");
}
