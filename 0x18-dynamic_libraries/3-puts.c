#include "main.h"

/**
 * _puts - It prints string
 * @str: All string to print
*/

void _puts(char *str)
{
	int v = 0;

	while (str[v] != '\0')
	{
		_putchar(str[v]);
		v++;
	}
	_putchar('\n');
}
