#include "main.h"

/**
 * _isdigit - checks wether character is digit
 * @c: character to bechecked
 *
 * Return: always 1 on success. 0 otherwise
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
