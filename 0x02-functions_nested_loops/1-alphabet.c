#include "main.h"

/**
 * print_alphabet - prints alphabet
 */

void print_alphabet(void)
{
	int i;

	i = 65;
	for (i = 'A'; i <= 'Z'; i++)
	{
		_putchar(tolower(i));
	}
	_putchar('\n');
}
