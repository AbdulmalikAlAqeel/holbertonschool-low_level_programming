#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase except q and e
 * using putchar only twice.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch); /* الاستخدام الأول */
		}
		ch++;
	}
	putchar('\n'); /* الاستخدام الثاني */

	return (0);
}
