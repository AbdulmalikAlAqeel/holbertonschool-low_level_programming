#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 * Description: Numbers are separated by a comma and a space,
 * printed in ascending order using only putchar.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
