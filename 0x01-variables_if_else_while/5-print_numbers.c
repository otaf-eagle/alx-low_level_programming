#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	x = 0;
	for (x = 0; x <= 9; x++)
	{
		printf("%d", x);
	}
	putchar('\n');
	return (0);
}
