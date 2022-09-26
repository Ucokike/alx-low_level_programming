#include "main.h"
/**
 * _memset - fills a area memory with a constant byte
 * @s: address of the memory area
 * @b: number of the bytes to be used
 *@n: umber of bytes to be used
 * Return: returns a pointer to the memory area s
 */
char *_memset(char *s, char b, unsignes int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
