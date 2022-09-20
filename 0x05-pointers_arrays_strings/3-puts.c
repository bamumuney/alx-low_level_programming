#include "main.h"

/**
 *Write a function that returns the length of a string.
 *prototype: int _strlen(char *s)
 *
 */

void _puts(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}

