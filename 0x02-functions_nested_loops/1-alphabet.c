#include "main.h"


/**
 * print_alphabet - check description.
 * Description: It prints the alphabet, in lowercase, followed by a new line.
 * Return: Nothing.
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
