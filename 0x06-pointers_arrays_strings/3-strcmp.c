#include "main.h"
#include <string.h>
/**
 * _strcmp - main function
 * @s1: function parameter
 * @s2: function parameter
 * Return: void
 */
int _strcmp(char *s1, char *s2)
{
	int b;

	for (b = 0 ; s1[b] != '\0' || s2[b] != '\0' ; b++)
	{
		if (s1[b] != s2[b])
		{
			if (s1[b] < s2[b])
				return (s1[b] - s2[b]);
			else if (s2[b] < s1[b])
				return (s1[b] - s2[b]);
		}
	}
	return (0);
}
