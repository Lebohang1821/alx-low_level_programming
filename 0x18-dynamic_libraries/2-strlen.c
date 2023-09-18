#include "main.h"

/**
 * _strlen - It will return the length of string
 *
 * @s: All characters to be checked
 *
 * Return: The length of the length
*/

int _strlen(char *s)
{
	int len = 0;

	for (; *s++;)
	{
		len++;
	}
	return (len);
}
