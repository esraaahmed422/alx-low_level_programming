#include <stdio.h>
/**
 * main - Entry point
 *Description: prints the alphabet in lowercase, and then in uppercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet;

	alphabet = 'a';
	do {
		putchar(alphabet);
		alphabet++;
	} while (alphabet <= 'z');
	alphabet = 'A';
	do {
		putchar(alphabet);
		alphabet++;
	} while (alphabet <= 'Z');
	putchar('\n');
	return (0);
}
