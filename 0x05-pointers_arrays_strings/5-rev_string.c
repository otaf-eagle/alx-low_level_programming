#include <string.h>
#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string value
 * Return: reversed string
 */
void rev_string(char *s)
{
	int len;

	len = strlen(s) - 1;
	while ((len) != -1)
	{
		putchar(s[len]);
		len--;
	}
}
