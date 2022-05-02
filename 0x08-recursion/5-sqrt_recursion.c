#include "main.h"

/**
 * _sqrt_recursion - returning the natural square root of a number
 * @n: input
 * Return: the natural square root of a number or -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (_sqrt_recursion(n, 1));
}

