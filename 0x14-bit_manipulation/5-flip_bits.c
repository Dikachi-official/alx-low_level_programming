#include "main.h"

/**
 * flip_bits - finds the number of bits you would need to flip
 * to get from one number to another
 * @n: integer
 * @m: integer
 *
 * Return: the number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int res = n ^ m;
	unsigned int count = 0;

	/* count the number of 1 bits in res */
	while (res)
	{
		count++;
		res = res & (res - 1);
	}

	return (count);
}
