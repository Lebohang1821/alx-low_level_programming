#include "main.h"

/**
 * _memcpy - It copies @n bytes from memory area @src
 * to a memory area @dest
 *
 * @src: Takes bytes from memory area
 * @n: The function that copies all bytes memory area
 * @dest: Is where bytes will be copied to
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int v = 0;

	while (v < n)
	{
		dest[v] = src[v];
		v++;
	}

	return (dest);
}
