#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *Discription: prints the lowercase alphabet in reverse
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet;

	alphabet = 'z';
	do {
		putchar(alphabet);
		alphabet--;
	} while (alphabet >= 'a');
	putchar('\n');
	return (0);
}
