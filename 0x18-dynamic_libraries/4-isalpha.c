#include "main.h"

/**
* _isalpha - It checks alphabetic character
*
* @c: the character to be checked
*
* Return: 1 for letter, 0 if otherwise
*/

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
