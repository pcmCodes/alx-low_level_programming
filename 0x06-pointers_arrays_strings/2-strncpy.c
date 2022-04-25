#include "main.h"
/**
 * _strncpy - coping a string
 * @dest: end
 * @src: origin
 * @n: amount of bytes from src.
 * Return: dest.
 */

char *_strncpy(char *dest, char *src, int n);
{
	int a;

	for (a = 0; a < n && dest[a] != '\0'; a++)
	{
		src[a] = dest[a];
	}

	for ( ; a < n; a++)
		src[a] = '\0';

	return (dest);
}

