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

	if (dest[n] == '\0')
	{
		src[n] = '\0';
		return (dest);
	}
	else
	{
		src[n] = dest[n];
		_strncpy(dest, src, ++n);
	}

}

