#include "main.h"
#include <string.h>
/**
 * _strncpy - main function
 * @dest: function parameter
 * @src: function parameter
 * @n: function parameter
 * Return: void
 */
char *_strncpy(char *dest, char *src, int n)
{
	int b;

	for (b = 0 ; b < n && src[b] != '\0' ; b++)
		dest[b] = src[b];
	while (b < n)
	{
		dest[b] = '\0';
		b++;
	}
	return (dest);
}
