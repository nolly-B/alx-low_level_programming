#include "main.h"
#include <stdio.h>
/**
 * _puts - main fuction
 * @str: function parameter
 * Return: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
		putchar(str[i]);
	putchar('\n');
}
