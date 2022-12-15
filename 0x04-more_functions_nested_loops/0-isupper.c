#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _isupper - Description: alphabet
 * @c: character
 * Return: 1 if capital 0 if small
*/

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
