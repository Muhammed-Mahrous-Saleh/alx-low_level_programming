#include <unistd.h>
#include "main.h"


/**
 * main - check description
 * Description: It prints the word _putchar, followed by a new line.
 * Return: always return 0 (Success).
 */
int main(void)
{
	char outMes[] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(outMes[i]);
	}
	_putchar('\n');
	return (0);
}
