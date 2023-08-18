#include "main.h"

/**
 * _isdigit - main function
 * @c: function parameter
 * Return: 1 on succes and 0 on failure
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
