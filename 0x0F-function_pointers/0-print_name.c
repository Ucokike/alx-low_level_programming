#include <stdlib.h>
#include "function_pointer.h"

/**
 * print_name - program prints a name
 * @name: the name to print
 * @f: pointer to the printing function
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
