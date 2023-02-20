#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char char_size;
	int int_size;
	long int long_int_size;
	long long int l_l_int_size;
	float float_size;

	printf("size of a char: %zu byte(s)\n", sizeof(char_size));
	printf("size of an int: %zu byte(s)\n", sizeof(int_size));
	printf("size of a long int: %zu byte(s)\n", sizeof(long_int_size));
	printf("size of a long long int: %zu byte(s)\n", sizeof(l_l_int_size));
	printf("size of a float: %zu byte(s)\n", sizeof(float_size));

	return (0);
}
