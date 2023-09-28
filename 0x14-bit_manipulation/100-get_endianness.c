#include "main.h"
/**
 * get_endianness - CHECKS IF A MACHINE IS LITTLE OR BIG ENDIAN
 * Return: 0 FOR BIG, 1 FOR LITTLE
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
