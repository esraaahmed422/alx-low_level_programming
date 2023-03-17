#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *Discription: "prints the alphabet in lowercase"
 * Return: Always 0 (Success)
 */
int main (void)
{
	char x [26] = "abcdefghijklmnopqrstuvwxyz";
	int n;

	for (n = 0; n < 26; n++)
	{
		putchar(x[n]);
	}
	putchar("\n");
	return (0);
}
