#include "main.h"

/**
 * get_endianness - checks endiness of system
 * Return: 0 or 1
 */
int get_endianness(void)
{
	int x = 1;
	char *y = (char *) &x;

	return (*y + '0');
}
