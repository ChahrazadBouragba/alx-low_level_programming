#include "main.h"

/**
 * flip_bits - flip from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: returns number of bits
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int con = 0;

	while (diff != 0)
	{
	con += diff & 1;
	diff >>= 1;
	}

	return (con);
}
