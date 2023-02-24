#include "main.h"
#include <stdio.h>

/**
 * main -  FizzBuzz game
 * chaecks for multiples of 3 and 5 and combined
 * Return: printed array
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz");
			putchar(' ');
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			if (i == 100)
			{
			}
			else
			{
				putchar(' ');
			}
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
			putchar(' ');
		}
		else
		{
			printf("%d", i);
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
