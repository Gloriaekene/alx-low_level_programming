#include "main.h"

/**
 * _isupper - checks if a character is upper case
 * @c: parameter to check
 * Return: 1 if 0 otherwise 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
