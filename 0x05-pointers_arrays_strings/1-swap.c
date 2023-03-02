#include "main.h"

/**
 * swap_int - swaps the output of a and b
 * @a: int
 * @b: int
 * return: at success at o
 */
void swap_int(int *a, int *b)
{
	int c, d;

	c = *b;
	d = *a;
	*a = c;
	*b = d;
}
