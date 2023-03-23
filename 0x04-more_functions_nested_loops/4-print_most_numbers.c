#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line.
 * Do not print 2 and 4.
 * Return: Always 0 (Success)
*/
void print_most_numbers(void)

{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		else
		{
			_putchar(i + 48);
		}
	}
	_putchar('\n');
}
