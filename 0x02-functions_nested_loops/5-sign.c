#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * print_sign - Description: alphabet
 * @c: character
 * Return: 1 if alphabet other return 0
*/

int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
