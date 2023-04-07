#include "main.h"

/**
 * get_endianness - function that checks the endianness
 *
 * Return: 0 if big endian and 1 if little endian
 */


int get_endianness(void)
{
	int num = 1;
	char *ptr = (char *)&num;

	return (int *ptr);
}
