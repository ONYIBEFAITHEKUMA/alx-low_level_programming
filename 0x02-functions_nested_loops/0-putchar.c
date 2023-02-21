#include <stdio.h>>
/**
 *  main - Entry point
 *
 *  Return: Always 0(success)
 */
int main(void)
{
	/* C program to demonstrate putchar() method */
	char fa = "faith";
	/* character to stdout */
	while (fa)
	{
		_putchar(fa);
		fa++;
	}
	_putchar('\n');
		return (0);
}
