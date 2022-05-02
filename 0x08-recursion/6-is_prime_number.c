#include "main.h"

/**
 * is_prime_number - returning 1 if the input integer is a prime number
 * @n: input
 * @i: iterator
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n, int i)
{
	i = 5;

	if (n == 0)
		return (1);
	else if (n % i == 0)
		return (1);
	else
		return (0 + is_prime_number(i + 1, n));
}
