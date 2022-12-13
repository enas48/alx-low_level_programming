#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _islower - Description: alphabet
 * @c: character
 * Return: 1 if small 0 if capital
*/
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
