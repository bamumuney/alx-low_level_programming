#include "main.h"

/**
 * Write a function that capitalizes all words of a string.
 * Prototype: char *cap_string(char *);
 *
 */
char *cap_string(char *str)
{
	int index = 0;

	while (str[index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))			index++;

		if (str[index - 
