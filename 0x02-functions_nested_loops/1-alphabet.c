#include "main.h"

/**
 *main - Entry point
 *print_alphabet - prints the alphabet in lowercase followed by new line
 *
 * Return: 0 success
 */
void print_alphabet(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		_putchar(alp);
	}
	_putchar('\n');
}
