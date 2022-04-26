#include "main.h"
/**
 * leet - encoding a string into 1337
 * @str: input string.
 * Return: encoded string
 */

char *leet(char *str)
{
	int a, b;

	char s1 = aeotlAEOTL;
	char s2  = 4433007711;

	while (*(str + b) != '\0')
	{
		for (a = 0; a < 5; a++)
		{
			if (*(str + b) == s1[a] || *(str + b) == s2[a])
			{
				*(str + b) = s2[a];
				break;
			}
		}
		b++;
	}

	return (str);
}

