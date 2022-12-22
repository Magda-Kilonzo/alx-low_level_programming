#include "main.h"

/**
 * _strncat - C function that copies a string including the
 * terminating null byte, using at mst an inputted number of bytes
 * When the length of source is less than maximum byte number,
 * the remainder of the destination string if filled will null bytes
 * Works identically to the standard library function
 * @dest: buffer storing the string copy
 * @src: source string
 * @n: max number of byte coied
 * Returns: returns
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
