#include "main.h"

/**
 * _strcat -  A concatenates of two strings.
 *
 * @dest: The string dest
 * @src: The string src
 *
 * Return: It returns char
*/

char *_strcat(char *dest, char *src)
{
	int r = 0;
	int d = 0;

	while (dest[r] != '\0')
		r++;
	while (src[d] != '\0')
	{
		dest[r] = src[d];
		d++;
		r++;
	}
	return dest;
}
