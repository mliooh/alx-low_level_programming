#include "main.h"

/**
 * clear_bit - sets the value of the bit to 0
 * @n: number to change
 * @index: bit index to be cleared
 *
 * Return: 1 success, -1 failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

