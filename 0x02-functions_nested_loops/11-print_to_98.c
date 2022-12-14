#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Description: alphabet
 * @n: character
 * Return: last digit
 */
void print_to_98(int n)
{
	int i = n;

	while (i < 99)
	{
		printf("%d", i);
		if (i == 98)
		{
			break;
		}
		printf(", ");
		i++;
	}
	while (i > 97)
	{
		printf("%d", i);
		if (i == 98)
		{
			break;
		}
		printf(", ");
		i--;
	}
	_putchar('\n');
}
