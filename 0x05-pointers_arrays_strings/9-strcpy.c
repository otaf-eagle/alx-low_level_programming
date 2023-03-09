#include "main.h"
#include <string.h>

/**
 * *_strcpy - copies the src to dest including null
 * @dest: destination for copy
 * @src: source of copy
 * Return: dest as copied from src
 */
char *_strcpy(char *dest, char *src)
{
	int lensrc;
	int lendest;
	int c;

	lensrc = strlen(src);
	c = 0;
	for(lendest = strlen(dest); lendest < lensrc; lendest++)
	{
		c++;
		*dest = src[c];
	}
	return(dest);
}
