#include "main.h"
#include <stdlib.h>
/**
 * get_endianness - gets the endianess
 * Return: integer
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *s = (char *)&num;

	return (*s);
}
