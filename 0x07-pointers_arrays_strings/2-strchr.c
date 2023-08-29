#include "main.h"
/**
 * _strchr - main function
 * @s: function parameter
 * @c: function parameter
 * Return: void
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0 ; s[index] >= '\0' ; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
