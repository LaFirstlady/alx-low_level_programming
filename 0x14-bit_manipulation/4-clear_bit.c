#include "main.h"
/**
 * clear_bit - The value of a given bit set to 0
 * @n: pointer to the number to change
 * @index: index of the bit to clear
 *
 * Return: 1 (SUCCESS), -1 (SUCCESS)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
