#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all single digit numbers of base 10 starting from 0
 * Return: Always 0
 */

int main(void)
{
	int i = 0;

	do {
		putchar((i % 10) + '0');
		i++;
	} while (i < 10);
	putchar ('\n');

	return (0);
}
