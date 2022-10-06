#include "main.h"

/**
 * malloc_checked - allocates memory using malloc.<F11>
 * @b: size of the memory to be allocated.
 * Return: pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
