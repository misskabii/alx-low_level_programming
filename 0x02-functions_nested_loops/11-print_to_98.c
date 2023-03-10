#include <stdio.h>

/**
 * print_to_98 - Print natural numbers to 98
 * from n to 98, add new line
 *
 * @n:input number
 *
 * Return: 0 success
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	printf("%d\n", n);
}
