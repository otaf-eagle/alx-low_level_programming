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
	printf("size of char : %zu byte\n", sizeof(char_size));
	printf("size of int : %zu byte\n", sizeof(int_size));
	printf("size of long int : %zu byte\n", sizeof(long_int_size));
	printf("size of long long int : %zu byte\n", sizeof(l_l_int_size));
	printf("size of float : %zu byte\n", sizeof(float_size));

	return 0;
}