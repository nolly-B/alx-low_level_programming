#include "main.h"
#include <stdio.h>
int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - main function
 * @n: function parameter
 * Return: void
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - main function
 * @n: function parameter
 * @i: function parameter
 * Return: void
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
