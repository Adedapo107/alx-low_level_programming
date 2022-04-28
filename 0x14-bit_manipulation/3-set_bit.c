#include "main.h"

/**
 * set_bit - sets a bit in given position
 * @n: number
 * @index: index
 * Return: number with setted position
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index <= 63)
	{
		*n = *n | (1 << index);
		return (1);
	}
	return (-1);
}
