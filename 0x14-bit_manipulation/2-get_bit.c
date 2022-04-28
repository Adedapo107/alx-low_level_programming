#include "main.h"
/**
 * get_bit - gets the bit in index
 * @n: the number
 * @index: index number
 * Return: 1 or 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return (n >> index & 1);
}
