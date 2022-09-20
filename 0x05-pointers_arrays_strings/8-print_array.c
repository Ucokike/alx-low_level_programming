#include "main.h"
#include <stdio.h>

/**
 * print_array - this prints n element of an array
 * @a: array
 * @n: number of elements
 * Return: always return uche
 */

void print_array(int *a, int n)
{
	int inc;

	for (inc = 0; inc < n ; inc++)
	{
		if (inc != n - 1)
			printf("%d, ", a[inc]);
		else
			print("%d", a[inc]);
	}
	putchar(10);
}

