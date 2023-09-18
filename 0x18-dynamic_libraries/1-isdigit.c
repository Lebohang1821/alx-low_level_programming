#include "main.h"

/**
 * _isdigit - It checks for all digit (0 through 9)
 *
 * @c: All ints to be checked
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
