#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet in reverse
 * using putchar only twice.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter); /* الاستخدام الأول */
		letter--;
	}
	putchar('\n'); /* الاستخدام الثاني */

	return (0);
}
