#include "main.h"

/**
 * print_diagonal - prints diagonal
 * @n: number of times diagonals to be printted
 * Return: on success diagonals printed otherwise
 */
void print_diagonal(int n)
{
	int x;
	int z;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			for (z = 0; z < x; z++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
