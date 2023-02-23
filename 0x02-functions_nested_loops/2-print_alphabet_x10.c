#include "main.h"
#include "1-alphabet.c"
/**
 * print_alphabet_x10 - prints 10 times each alphabet
 */

void print_alphabet_x10(void)
{
	int i;

	i = 1;
	for (i = 1; i < 11; i++)
	{
		print_alphabet();
	}
}
