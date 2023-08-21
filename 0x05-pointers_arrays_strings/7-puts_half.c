#include "main.h"
#include <stdio.h>
/**
 * puts_half - main function
 * @str: function parameter
 * Return: void
 */
void puts_half(char *str)
{
	int i, n, count = 0;

	for (i = 0 ; str[i] != '\0' ; i++)
		count++;
	n = (count - 1) / 2;
	for (i = n + 1 ; str[i] != '\0' ; i++)
		putchar(str[i]);
	putchar('\n');
}
