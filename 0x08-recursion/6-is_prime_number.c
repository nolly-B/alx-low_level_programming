#include "main.h"
#include <stdio.h>
int actual_prime(int n, int i);
/**
 * is_prime_number - main function
 * @n: function parameter
 * Return: void
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
/**
 * actual_prime - main function
 * @n: function parameter
 * @i: function parameter
 * Return: void
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
