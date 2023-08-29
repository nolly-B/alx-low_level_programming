#include "main.h"
/**
 * _strpbrk - main function
 * @s: function parameter
 * @accept: function parameter
 * Return: void
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0 ; accept[index] ; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
