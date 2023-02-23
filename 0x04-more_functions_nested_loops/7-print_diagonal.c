#include "main.h"

/**
 * print_diagonal - prints a diagonal on terminal
 * @n: number of times to be printed
 * Return: diagonal n times . otherwise print NL
 */
void print_diagonal(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			_putchar('\\');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
