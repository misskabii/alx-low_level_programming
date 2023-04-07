#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number, or 0 if there is one or more chars in the
 * string b that is not 0 or 1, or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	const char *ptr;

	if (b == NULL)
	return (0);

	for (ptr = b; *ptr != '\0'; ptr++)
	{
		if (*ptr != '0' && *ptr != '1')
		return (0);
	result = result * 2 + (*ptr - '0');
	}
	return (result);
}

