#include <stdio.h>
#include "main.h"


/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be represented in binary
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int current;

	for (i = 40; i >= 0; i--)
	{
		current = n >> i;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}