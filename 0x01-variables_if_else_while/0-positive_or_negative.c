#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *Discription: "check for number if it is positive or negative "
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
	printf("%d This is number is positive\n", n);
	}
	else if (n == 0)
	{
	printf("%d This is number is zero\n", n);
	}
	else
	{
	printf("%d This is number is negative\n", n);
	}
	return (0);
}
