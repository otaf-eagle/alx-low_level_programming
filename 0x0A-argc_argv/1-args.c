#include "main.h"
#include <stdio.h>

/**
 * main - program that prints number of arguments
 * @argc: arguments
 * @argv: vector argument array
 * Return: zero on success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n",argc - 1);
	return (0);
}
