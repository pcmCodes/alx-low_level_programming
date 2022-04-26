#include "main.h"
/**
 * _memcpy - coping memory area
 * @dest: destination
 * @src: source
 * @n: bytes from memory area
 * Return: pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		*(dest + a) =  *(src + a);

	return (dest);
}

