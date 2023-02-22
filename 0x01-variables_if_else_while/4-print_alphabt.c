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
		if (x != '69'; x != '81')
		{
			putchar(tolower(x));
		}
	}
	putchar('\n');
	return (0);
}
