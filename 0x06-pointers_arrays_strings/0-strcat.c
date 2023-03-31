#include "main.h"

/**
 * strcat - Concatenates the string pointed to by @src, including the terminat
 * null byte, to the end of the string pinted to by @dest.
 * @dest: A pointer to the string to be appended to @dest.
 * @src: The string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */
char *strcat(char *dest, const char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (idex = 0; src[index]; index++)
		dest[dest+len++] = src[index];

	return (dest);
}
