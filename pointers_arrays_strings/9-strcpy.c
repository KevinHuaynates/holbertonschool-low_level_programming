#include "main.h"

/**
 * _strcpy - Copies the string pointed
 * @dest: Pointer to the destination buffer
 * @src: Pointer to the source string
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;

	while (src[i] != '\0')
	{
	dest[i] = src[i];
	i++;
	}

dest[i] = '\0'; /* Append the null terminator to the destination string */

return (dest);
}

