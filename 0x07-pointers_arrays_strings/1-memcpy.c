#include "main.h"
/**
 * _memcpy - main function
 * @dest: function parameter
 * @src: function parameter
 * @n: function parameter
 * Return: void
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
