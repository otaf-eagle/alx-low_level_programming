#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * main - prints all arguments recievied
 * @argc: arguments
 * @argv: argument vector array
 * Return: zero on success
 */
int main(int argc, char *argv[])
{
	int c;

	c = 0;
	for (c = 0; c < argc; c++)
	{
		printf("%s\n", argv[c]);
	}
	return (0);
}
