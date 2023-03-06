#include "main.h"
#include <string.h>

/**
 * puts2 - print each other char in string
 * @str: string value
 * Return: void 0 always on success
 */
void puts2(char *str)
{
	int i;
	int len;

	len = strlen(str);
	for (i = 0; i <= (len - 1); i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
