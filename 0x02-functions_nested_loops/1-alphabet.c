#include <stdlib.h>
#include <stdio.h>
/**
 * print_alphabet - Make the alphabet
 * Return: Always 0 (Success)
*/

void print_alphabet(void)
{
	char alphabet;

	alphabet = 'a';
	do {
		putchar(alphabet);
		alphabet++;
	} while (alphabet <= 'z');
	putchar('\n');
}
