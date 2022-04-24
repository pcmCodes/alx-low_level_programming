#include "main.h"

/**
 * concatenating two strings
 *
 */
 {
char *_strcat(char *dest, char *src);
{
	int dently = 0;
	int sour = 0;

	while (dest[dently] != '\0') {
		dently++;
	}
	while (src[sour] != '\0') {
		dest[dently] = src[sour];
		sour++;
		dently++;
	}

	dest[dently] = '\0';
	return (dest);
	}	
}

