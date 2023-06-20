#include <stdio.h>

/**
 * main - Entry Point.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long int fib[98];

	fib[0] = 1;
	fib[1] = 2;
	printf("%llu, %llu, ", fib[0], fib[1]);

	for (i = 2; i < 98; i++)
	{
	  fib[i] = fib[i - 1] + fib[i - 2];
	  if (i == 97)
	    printf("%llu\n", fib[i]);
	  else
	    printf("%llu, ", fib[i]);
	}

	return (0);
}
