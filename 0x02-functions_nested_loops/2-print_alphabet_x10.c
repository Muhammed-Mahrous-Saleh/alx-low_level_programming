#include <unistd>
#include "main.h"


/**
 * print_alphabet_x10 - check description.
 * Description: It prints 10 times the alphabet in lowercase,
 * followed by a new line.
 * Return: Nothing.
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		print_alphabet();
	}
}

