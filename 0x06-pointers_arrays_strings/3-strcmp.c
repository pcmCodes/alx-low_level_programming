#include "main.h"
/**
 * _strcmp - comparing two strings
 * @s1: string number 1
 * @s2: string number 2
 * Return: 0 or 9
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0;
	int res = 0;

	while ((*(s1 + a) != '\0') & (*(s2 + a) != '\0'))
	{
	if (*(s1 + a) != *(s2 + a))
	res = 1;
	break;
	a++;
	}
	if (res == 0)
	return (res);
}
