#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	x = 122;
	for (x = 122; x >= 97; x--)
	{
		putchar(tolower(x));
	}
	putchar('\n');
	return (0);
}
