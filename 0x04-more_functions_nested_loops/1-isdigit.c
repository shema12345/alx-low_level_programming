#include "main.h"

/**
 * int _isdigit - checks if numbers are 0 - 9
 *
 * @c: char to be checked
 *
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (0);
	else
		return (1);
}
