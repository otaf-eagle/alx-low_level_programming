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
	for (x = 'A'; x <= 'z'; x++)
	{
		putchar(tolower(x));
		putchar(toupper(x));
	}
	putchar('\n');
	return (0);
}
