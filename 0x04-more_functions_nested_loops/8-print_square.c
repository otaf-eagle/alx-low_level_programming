#include "main.h"

/**
 * print_square - print a square
 * @size: the size of the square
 * Return: a drawn square
 */
void print_square(int size)
{
	if (size > 0)
	{
		int i;
		int z;

		for (i = 0; i < size; i++)
		{
			for (z = 0; z < size; z++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
