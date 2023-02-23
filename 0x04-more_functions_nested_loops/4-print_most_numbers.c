#include "main.h"

/**
 * print_most_numbers - prints numbers excluding some
 *
 * Return: on success numberes called
 */
void print_most_numbers(void)
{
	int i;

	i = 0;
	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar(i + '0');
	}
	_putchar('\n');
}
