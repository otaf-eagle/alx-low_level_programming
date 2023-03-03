#include "main.h"
#include <string.h>

/**
 * _strncat - appends n numbers from s2 to s1
 * @dest: string 1
 * @src: string 2
 * @n: number of chars to be evaluated
 * Return: appended string 1
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, len;
	
	len = strlen(src);
	i = 0;
	while (*(dest + i) != '\0')
	{
		i++;
	}
	j = 0;
	if (len < n)
	{
		while (len != j)
		{
			*(dest + i) = *(src + j);
			j++;
			i++;
		}
	}
	else
	{
		while (*(src + j) != '\0')
		{
			if (j == n)
				break;
			*(dest + i) = *(src + j);
			j++;
			i++;
		}
	}
	return (dest);
}
