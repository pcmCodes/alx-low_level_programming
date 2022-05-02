#include "main.h"

/**
 * _pow_recursion - returning the value of x raised to the power of y
 * @x: base
 * @y: exponent
 * Return: the value of x raised to the power of y or -1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else
		return (x * _pow_recursion(x, y - 1));
}

