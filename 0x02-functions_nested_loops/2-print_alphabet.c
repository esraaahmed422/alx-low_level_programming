#include <stdlib.h>
#include <stdio.h>
/**
 * print_alphabet - prints 10 times the alphabet, in lowercase
 * Return: Always 0 (Success)
*/

void print_alphabet(void)
{
	char alphabet;
	int i;
	for (i = 1; i <= 10; i++)
	{
		alphabet = 'a';
		do {
			putchar(alphabet);
			alphabet++;
		} while (alphabet <= 'z');
		putchar('\n');
	}
}
