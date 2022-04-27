#include "main.h"

/**
 * _strpbrk - searching a string for any of a set of bytes
 * @accept: first occurrence
 * @s: second string.
 * Return: pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int a, b;

	for (a = 0; *(s + a) != '\0'; a++)
	{
		for (b = 0; *(accept + b) != '\0'; b++)
		{
			if (*(s + a) == *(accept + b))
				return (s + a);
		}
	}
	return (s);
}
