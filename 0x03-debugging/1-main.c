#include <stdio.h>
/**
 * main-this causes an infinite loop
 * return: always 0
 */
int main(void)

{
	int i;

	printf("infinite loop incoming :(\n");
	i = 0;
	/**
	 * while (i < 10)
	 * {
	 * putchar(i);
	 * }
	 */
	printf("infinite loop avoided! \\o/\n");
	return (0);
}
