#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet 10 times.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char alphabet;
	int i;

	for (i = 0; i <= 9; i++)
	{
		alphabet = 'a';
		do {
			_putchar(alphabet);
			alphabet++;
		} while (alphabet <= 'z');
	_putchar('\n');
	}
}
