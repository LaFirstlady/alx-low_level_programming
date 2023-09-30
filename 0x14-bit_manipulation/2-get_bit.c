#include "main.h"
/**
 * get_bit - The value of a bit returned at an index in a decimal number
 * @n: NUMBER TO SEARCH
 * @index: INDEX OF A BIT
 *Return: VALUE OF A BIT 
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
