#include "main.h"

/**
 * print_array - prints n numbers of elements for array
 * @n: number of elements to be printed
 * Return: on success zero
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (i = 0; i < n; i++)
	{
		if (i < (n - 1))
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	putchar('\n');
}
