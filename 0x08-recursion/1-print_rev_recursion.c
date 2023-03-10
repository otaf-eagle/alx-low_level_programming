#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - prints a reversed string
 * @s: string value to be printed
 * Return: reversed string and zero on success
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
