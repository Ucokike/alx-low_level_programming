#include "main.h"
#include <unistd.h>

/**
 * _putchar -  writs thecharcter c to stdout
 * @c: the character to print
 * Return: on success 1.
 * on error, -1 is returned and erno is set appropraitely
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
