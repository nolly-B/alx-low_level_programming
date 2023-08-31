#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - main function
 * @s: function parameter
 * Return: void
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}
	return (longit);
}
