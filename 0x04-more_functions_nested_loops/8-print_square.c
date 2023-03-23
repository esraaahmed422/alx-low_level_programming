#include "main.h"

/**
 * print_square - Prints n squares according n number of times
 * @size: The number of squares/number of times
 * Return: Always 0 (Success)
 */

void print_square(int size)

{
	int i;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (i = 0; i < size; i++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
}
