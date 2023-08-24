#include "main.h"
#include <string.h>
/**
 * _strncat - main function
 * @dest: function parameter
 * @src: function parameter
 * @n: function parameter
 * Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int y;

	for (y = 0 ; y < n && *src != '\0' ; y++)
	{
		dest[len + y] = src[y];
		src++;
	}
	dest[len + y] = '\0';
	return (dest);
}
