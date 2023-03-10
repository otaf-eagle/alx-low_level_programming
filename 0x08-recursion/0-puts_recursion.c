#include "main.h"

/**
 * _puts_recursion - prints a string followed by n
 * @s: string to be printed
 * Return: on success 0 and the printed s
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
		_puts_recursion((s + 1));
	}
	else
	{
		putchar('\n');
		return;
	}
}
