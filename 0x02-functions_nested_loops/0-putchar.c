#include <unistd.h>
#include "main.h"


/*
 * main: the main task,
 * Return: always return 0 (Success)
 */
int main(void)
{
	char outMes[] = "_putchar\n";
	for (int i = 0; i < 9; i++)
	{
		_putchar(outMes[i]);
	}
	return (0);
}
