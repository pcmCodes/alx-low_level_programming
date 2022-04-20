#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int _strlen(char *s)
{
int u;

u = 0;
while (s[u] != '\0')
{
u++;
}
return (u);
}
