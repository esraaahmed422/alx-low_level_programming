#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * followed by a new line, except q and e
 * Return: Always 0
 */
int main(void)
{
	char alphabet;

	alphabet = 'a';

	do {
		if (alphabet != 'e' && alphabet != 'q')
		putchar(alphabet);
		alphabet++;
	} while (alphabet <= 'z');

	putchar('\n');

	return (0);
}

