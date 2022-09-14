#include "main'h"

/**
 * _abs - Entry point
 * @n: n is an integer
 * Description: prints absolute value of integer
 * Return: int
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
