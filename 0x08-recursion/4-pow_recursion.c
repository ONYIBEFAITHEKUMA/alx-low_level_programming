#include "main.h"

/**
 *  _pow_recursion -  function that returns the value of x raised to the power of y
 *
 *  @x: parameters to be checked
 *
 *  @y; parameters to be checked
 *
 *  Reurn: 0 success
 *
 *  Return: -1 error
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}

