#include "main.h"

/**
 * string_toupper - Changes all lowercase letters
 * to upper case
 * @s: The string to be changed.
 * Return: a pointer to the changed string
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	}
	return (s);
}


