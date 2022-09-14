#include "main.h"

/**
 * print_alphabet - Entry point
 * Description: function that prints the alphabet.
 * in lower followed by new line
 * Return: void
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
	
