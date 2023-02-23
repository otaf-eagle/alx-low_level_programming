#include "main.h"

/**
 * _isupper - checks wether alphabet is upper case
 *@c: character to be checked
 *
 * Return: always 1 on success. 0 otherwise
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
