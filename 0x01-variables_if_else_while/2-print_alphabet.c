#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *Discription: "prints the alphabet in lowercase"
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
	putchar('\n');
	return (0);
}
