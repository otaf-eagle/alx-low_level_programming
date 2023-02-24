#include "main.h"

/**
 * print_diagonal - prints diagonal
 * @n: number of times diagonals to be printted
 * Return: on success diagonals printed otherwise
 */
void print_triangle(int size)
{
        int x;
        int z;

        if (size > 0)
        {
                for (x = 0; x < size; x++)
                {
                        for (z = size; z >= 1; z--)
                        {
                                _putchar(' ');
                        }
                        _putchar('#');
                        _putchar('\n');
                }
        }
        else
        {
                _putchar('\n');
        }
}
