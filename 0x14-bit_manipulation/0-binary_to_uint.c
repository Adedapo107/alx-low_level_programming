#include "main.h"

/**
 * binary_to_uint - converst binary to uint
 * @b: binary number
 * Return: converted uint
 */
unsigned int binary_to_uint(const char *b)
{
	uint a = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '1' && *b != '0')
			return (0);
		a = a * 2 + (*b++ - 48);
	}
	return (a);
}
