#include "main.h"

/**
 * Write a function that changes all lowercase
 * letters of a string to uppercase.
 * Prototype: char *string_toupper(char *);
 *
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] *= 32;

		index++;
	}

	return (str);
}
