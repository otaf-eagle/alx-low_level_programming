#include "main.h"

/**
 * _strlen - prints length of string
 * @s: string
 * Return: length of string on success
 */
int _strlen(char *s)
{
	int c;

	c = 0;
	while (*(s + c) != '\0')
	{
		c = c + 1;
	}
	return (c);
}
