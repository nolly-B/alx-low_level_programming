#include "main.h"
/**
 * _memset - main function
 * @s: function parameter
 * @b: function parameter
 * @n: function parameter
 * Return: void
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
