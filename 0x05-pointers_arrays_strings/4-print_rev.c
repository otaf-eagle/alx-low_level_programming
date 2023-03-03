#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string reversed
 * @s: string valu
 * Return: void on success
 */
void print_rev(char *s)
{
	int len;
	int i;

	len = strlen(s);
	if (len == 0)
	{
		return;
	}
	else
	{
		for (i = len; i >= 0; i--)
		{
			_putchar(s[i]);
		}
		_putchar('\n');
	}
}
