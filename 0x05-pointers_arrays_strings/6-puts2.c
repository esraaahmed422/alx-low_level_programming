#include "main.h"
/**
 * puts2 - should print only one character out of two
 * starting with a first one
 * @str: input
 * return: print
 */
void puts2(char *str)
{

	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (i % 2 == 0)
			_putchar(str[i]);

	}
	_putchar('\n');
}
