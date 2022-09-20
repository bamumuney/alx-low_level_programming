#include "main.h"

/** 
 * a function that swaps the values of two integers
 *
 *
 */
void swap_int(int *a, int *b)
{
	int changed;

	changed = *a;
	*a = *b;
	*b = changed;
}
