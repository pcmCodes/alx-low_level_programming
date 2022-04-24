#include "main.h"
/**
 * _strncat - function concatenating two strings,
 * @dest: end
 * @src: origin
 * @n: n bytes from src
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
		i++;
	while (j < n)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
			break;
		i++;
		j++;
	}
	return (dest);
}

