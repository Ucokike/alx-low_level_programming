#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string followed by a new line
 * @str: string to be printed
 * Description: prints a string
 * on success: returns no error
 */

void _puts(char *str)
{
	int c = 0;

	while (*(str + c) != '\0')
	{
		putchar(*(str + c));
		c++;
	}
	putchar(10);
}
