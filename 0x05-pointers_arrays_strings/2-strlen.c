#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: to contain string whose length is to be determined
 *
 * Return: the length of *s.
*/

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;

	return (length);
}
