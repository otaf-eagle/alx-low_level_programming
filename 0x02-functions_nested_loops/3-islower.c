#include "main.h"

/**
 * _islower - checks whether a letter is lower case
 * @c: character
 * 
 * Return: always 1 on success . 0 otherwise   
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
