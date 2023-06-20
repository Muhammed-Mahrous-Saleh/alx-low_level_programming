#include "main.h"


/**
 * _isalpha - check description.
 * @c: an input character.
 * Description: It checks for Lowercase and Uppercase character.
 * Return: 1 if c is lowercase or uppercase, 0 otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
