include "main.h"
/**
 * a function that prints half of a string, followed by a new
 * line.
 * Prototype: void puts_half(char *str);
 * The function should print the second half of the string
 * If the number of characters is odd, the function
 *  should print the last n characters of the string,
 *   where n = (length_of_the_string - 1) / 2
 *
 */
{
	int index, half;

	index = 0;
	while (str[index] != '\0')
		index ++;
	half = index / 2;

	if (index % 2 == 1)
		half ++;
	while (half < index)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
