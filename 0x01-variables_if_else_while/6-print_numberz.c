#include <stdio.h>

/**
 * main - Prints all single digit numbers base 10 from 0
 *
 * Return: Always 0
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
		putchar(a + '0');

	putchar('\n');
	return (0);
}
