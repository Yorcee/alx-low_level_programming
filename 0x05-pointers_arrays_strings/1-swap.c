#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: pointer to store variable address.
 * @b: second pointer to store variable address.
*/

void swap_int(int *a, int *b)
{
	*a = *a - *b;
	*b = *a + *b;
	*a = *b - *a;
}
