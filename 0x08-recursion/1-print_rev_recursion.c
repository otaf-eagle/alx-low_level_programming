#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - prints a reversed string
 * @s: string value to be printed
 * Return: reversed string and zero on success
 */
void _print_rev_recursion(char *s)
{
	int len_;

	len_ = strlen(s) - 1;
	len_--;
	if (len_ != 0)
	{
		putchar(*s);
		_print_rev_recursion(s + len_);
	}
	else
	{
		putchar('\n');
	}
}
