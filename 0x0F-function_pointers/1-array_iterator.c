#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - it executes a function given as a parameter
 * on each elemet of an array
 * @array: the array to iterate over
 * @size: the size of the array
 * @action: pointer to function used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++;)
		action(array[i]);
}
