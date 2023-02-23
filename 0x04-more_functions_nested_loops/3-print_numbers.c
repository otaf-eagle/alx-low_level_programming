#include "main.h"

/**
 * print_numbers - prints from zero to nine
 *
 * Return: printed digits followed by NL
 */
void print_numbers(void)
{
	int i;

	i = 0;
	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
