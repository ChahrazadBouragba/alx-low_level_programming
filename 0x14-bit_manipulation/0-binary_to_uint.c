#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if failed
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int lon = 0;
	unsigned int n = 0;
        unsigned int i;

	if (!b)
	return (0);

	while (b[lon] != '\0')
	{
	if (b[lon] != '0' && b[lon] != '1')
	return (0);
	lon++;
	}

	for (i = 0; i < lon; i++)
	{
	if (b[i] == '1')
	n += 1u << (lon - 1 - i);
	}
	return (n);
}
