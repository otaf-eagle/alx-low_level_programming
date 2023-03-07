#include "main.h"
#include <string.h>

/**
 * puts_half - prints the second half of a string
 * @str: string value
 * Return: on success always zero
 */
void puts_half(char *str)
{
	int i;
	int len;
	int n;
	int x;
	int y;

	len = strlen(str);
	n = len;
	if (n % 2 == 0)
	{
		x = (n / 2);
		for (i = x; i < len; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
	else if (n % 2 != 0)
	{
		y = (n - 1) / 2;
		for (i = y; i < len; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
}
