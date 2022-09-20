#include "main.h"
/**
 * this program swaps the value of two variables a and b
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
