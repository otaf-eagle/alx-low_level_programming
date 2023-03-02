#include "main.h"
#include <string.h>

/**
 * *_strcat - appending src to dest
 * @src: string valu
 * @dest: string valu
 * return: returns a pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (*(dest + i) != '\0')
	{
		i++;
	}
	j = 0;
	while (*(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	return (dest);
}
