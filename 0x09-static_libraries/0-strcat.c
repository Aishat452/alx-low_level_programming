#include "main.h"

/**
* _strcat - concatenates two strings
* @dest: the destination string
* @src: the source string
*
* Return: a pointer to the resulting string
*/

char *_strcat(char *dest, const char *src)

{
	size_t dest_len = strlen(dest);
	size_t i;

	for (i = 0; src[i] != '\0'; i++)
	dest[dest_len + i] = src[i];

	dest[dest_len + i] = '\0';

	return (dest);
}
