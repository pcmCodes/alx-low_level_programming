#include "main.h"

/**
 * _strstr -  locating a substring
 * @haystack: entire string.
 * @needle: substring.
 * Return: pointer to the beginning of located substring or NULL
*/
char *_strstr(char *haystack, char *needle)
{
	char a;
	char b;

	while (*haystack != '\0')
	{
		a = haystack;
		b = needle;

		while (*haystack != '\0' && b != '\0' && *haystack == b)
		{
			haystack++;
			pneedle++;
		}
		if (!b)
			return (a);
		haystack = b + 1;
	}
	return (0);
}

