#include "main.h"
/**
 * cap_string - capitalizing all words of a string
 * @str: input string.
 * Return: capitalized words
 */

char *cap_string(char *str)
{
	int count = 0, i;
	int sep_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if ((*(str + count) >= 'a') && (*(str + count) <= 'z'))
		*(str + count) = *(str + count) - 32;
	count++;
	while (*(str + count) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(str + count) == sep_words[i])
			{
				if ((*(str + (count + 1)) >= 'a') && (*(str + (count + 1)) <= 'z'))
					*(str + (count + 1)) = *(str + (count + 1)) - 32;
				break;
			}
		}
		count++;
	}
	return (str);
}
