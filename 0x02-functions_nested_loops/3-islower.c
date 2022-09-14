#include "main.h"

/**
 * _islower - Entry point
 * Description: check if a character is lower
 * @c: the integer value it recieves
 * Return: 1 if true. 0 if false.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	else
		return (0);
}

