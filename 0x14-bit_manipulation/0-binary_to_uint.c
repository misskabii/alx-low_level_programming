#include<stdlib.h>
#include"main.h"
/**
  *binary_to_uint - converts a binary number to an unsigned int
  *@b: pointer to a string of 0 and 1 chars
  *Return the converted number, or 0 if
  *there is one or more chars in the string b that is not 0 or 1
  *b is NULL
  *Return:Always 0 success
  */

unsigned int binary_to_uint(const char *b)
{
	int *ptr;
	unsigned int result = 0;

	if (b == NULL)
		return (0);
	const char *ptr = b;

	while (*ptr != '\0')
	{
	if (*ptr != '0' && *ptr != '1')
		return (0);
	result = result * 2 + (*ptr - '0');
	ptr++;
	}
	return (result);
}
