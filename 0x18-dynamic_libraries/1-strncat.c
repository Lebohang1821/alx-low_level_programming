#include "main.h"

/**
 * _strncat - Its func that concatenates two strings
 *
 * @src: The string source
 * @dest: The string destination
 * @n: The Length of the int
 *
 * Return: A pointer
*/

char *_strncat(char *dest, char *src, int n)
{
	int r = 0;
	int d = 0;

	while (dest[r] != '\0')
		r++;
	while (src[d] != '\0' && d < n)
	{
		dest[r] = src[d];
		d++;
		r++;
	}
	return (dest);
}
