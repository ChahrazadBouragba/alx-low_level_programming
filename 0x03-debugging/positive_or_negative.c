#include "main.h"

/**
 *positive_or_negative - checks for positive or negative numbers
 *
 * @i: the number to be checked
 *
 * Return: returns 0
 */

void positive_or_negative(int i)
{


	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	if (i == 0)
	{
		printf("%d is zero\n", i);
	}
}
