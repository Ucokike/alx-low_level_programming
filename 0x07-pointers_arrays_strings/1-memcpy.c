#include "main.h"

/**
 * _memcpy- function copies memory area
 * @dest: dest memory area
 * @src: source memory area
 * @n: bytes from memory area to copy
 * Return: the memory area is replaced
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
