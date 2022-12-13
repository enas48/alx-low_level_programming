#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Description: alphabet
 * @c: character
 * Return: last digit
*/
int print_last_digit(int c)
{
	int last;

	last = c % 10;
	if (last < 0)
	{
		last = last * -1;
	}	
	_putchar('0' + last);
	return (last);
}
