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

	x = 65;
	for (x = 'A'; x <= 'Z'; x++)
	{
		if (x != 101 && x != 113)
		{
			putchar(tolower(x));
		}
	}
	putchar('\n');
	return (0);
}
