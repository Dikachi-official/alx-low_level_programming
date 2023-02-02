#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to an integer
 * @index: the index, starting from 0 of the bit you want to set
 *
 * Return: 1 if successful. Otherwise -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(*n)) * 8)
		return (-1);

	if ((*n & (1 << index)) > 0)
		(*n) -= (1 << index);

	return (1);
}
