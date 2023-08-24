#include "main.h"
#include <string.h>
/**
 * reverse_array - function parameter
 * @a: function parameter
 * @n: function parameter
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int c;
	int b;

	for (c = 0 ; c < n-- ; c++)
	{
		b = a[c];
		a[c] = a[n];
		a[n] = b;
	}
}
