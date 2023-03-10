#include "main.h"

/**
 * _pow_recursion - raises x to power of y
 * @x: base number
 * @y: raised power
 * Return: raised digit to power of y and -1 if y is lower 0
 */
int _pow_recursion(int x, int y)
{
	if (y == 1)
	{
		return (x);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if(y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, (y - 1)));
}
