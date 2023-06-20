#include <stdio.h>

/**
 * main - Entry Point.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int next_fibonacci;

	printf("%lu, %lu, ", a, b);

	for (i = 2; i < 98; i++)
	{
		next_fibonacci = a + b;
		a = b;
		b = next_fibonacci;

		if (i == 97)
			printf("%lu\n", next_fibonacci);
		else
			printf("%lu, ", next_fibonacci);
	}

	return 0;
}
