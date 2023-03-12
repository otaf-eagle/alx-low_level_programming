#include <stdio.h>
#include "main.h"

/**
 * a program that prints the name of itself
 * @argc: the arrgument gcc
 * @argv: the array of arguments
 * Return: zero always on success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
