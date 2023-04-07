#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number.
 * @n: number in binary.
 *
 * Return: it returns nothing.
 */

void print_binary(unsigned long int n)
{
	unsigned long int cifra;
	int con = 0;
	int i;

	for (i = 63; i >= 0; i--)
	{
		cifra = n >> i;

		if (cifra & 1)
		{
			_putchar('1');
			con++;
		}
		else if (con)
			_putchar('0');
	}
	if (con == NULL)
		_putchar('0');
}
