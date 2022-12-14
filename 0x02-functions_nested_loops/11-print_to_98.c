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

	while (i < 98)
	{
		printf("%d", i);
		printf(", ");
		i++;
	}
	while (i > 98)
	{
		printf("%d", i);
		printf(", ");
		i--;
	}
	printf("98\n");
}
