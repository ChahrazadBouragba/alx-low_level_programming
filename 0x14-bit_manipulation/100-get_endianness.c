#include "main.h"

/**
 * get_endianness - function that checks the endianness
 *
 * Return: 0 if big endian and 1 if little endian
 */


int get_endianness(void)
{
	unsigned int y;
	char *n;

	y = 1;
	n = (char *) &y;

	return ((int)*n);
}
