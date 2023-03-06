#include <string.h>
#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string value
 * Return: reversed string
 */
void rev_string(char *s)
{
	if (s)
	{
		char *end = s + strlen(s) - 1;

		while (s < end)
		{
			do {
				*s ^= *end;
				*end ^= *s;
				*s ^= *end;
			} while (0);
			s++;
			end--;
		}
	}
}
