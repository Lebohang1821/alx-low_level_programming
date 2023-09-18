#include "main.h"

/**
 * _strncpy - The func copies string
 *
 * @src: The string source
 * @n: length of int
 * @dest: The string destination
 *
 * Return: returns dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int r;

	for (r = 0; r < n && *(src + r); r++)
	{
		*(dest + r) = *(src + r);
	}
	for (; r < n; r++)
	{
		*(dest + r) = '\0';
	}
	return (dest);
}
