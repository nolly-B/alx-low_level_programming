#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - main function
 * @n: function parameter
 * Return: void
 */
void print_diagonal(int n)
{
	if (n <= 0)
		putchar('\n');
	else
	{
		int i, j;

		for (i = 0 ; i < n ; i++)
		{
			for (j = 0 ; j <= i ; j++)
				putchar(' ');
			putchar('\\');
			putchar('\n');
		}
	}
}

