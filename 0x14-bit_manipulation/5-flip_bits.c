#include "holberton.h"

/**
 * flip_bits - finds how many bits you need to switch for converting to m
 * @n: number to be checked
 * @m: desired number
 * Return: number of bits you need to flip to get m from n
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	uint  count = 0;

	n = n ^ m;
	for (; n; n >>= 1)
	{
		if (n % 2)
			count++;
	}
	return (count);
}
