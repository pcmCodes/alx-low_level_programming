#include "main.h"
/**
 * reverse_array - reversing the content of an array of integers.
 * @a: array.
 * @n: the number of elements of the array.
 * Return: reversed content of an array of integers
 */

void reverse_array(int *a, int n)
{
	int x = 0;
	int y = x + 1;
	int rev;

	for (x = 0; x < n - 1; x++)
	{
		for (y = x + 1; y > 0; y--)
		{
			rev = *(a + y);
			*(a + y) = *(a + (y - 1));
			*(a + (y - 1)) = rev;
		}
	}
}

