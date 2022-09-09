#include <unistd.h>

/**
 * main- this progam prints a text
 *
 * return is always 1 to be sucessful
 */
int main(void)
{
	write(2, "and that peice of art is useful\" - Dora korpar, 2015-10-19\n", 59);
	return(1);
}
