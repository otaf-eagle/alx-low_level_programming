#include "main.h"

/**
 * _puts_recursion - prints a string followed by n
 * @s: string to be printed
 * Return: on success 0 and the printed s
 */
void _puts_recursion(char *s)
{
	int i;

	i = 0;
	++i;
	putchar(s[i]);
	if (*(s + i) == '\0')
	{
		putchar('\n');
		return;
	}
}
