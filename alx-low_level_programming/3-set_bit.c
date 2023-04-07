#include "cifraain.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: unsigned long int
 * @index: index
 *
 * Return: 1 in success, -1 if failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int cifra;

	if (index > 63)
		return (-1);

	cifra = 1 << index;
	*n = (*n | cifra);

	return (1);
}
