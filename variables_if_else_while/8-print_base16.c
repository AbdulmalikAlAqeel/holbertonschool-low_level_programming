#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char ch;

	/* الحلقة الأولى: طباعة الأرقام من 0 إلى 9 */
	for (num = '0'; num <= '9'; num++)
	{
		putchar(num); /* الاستخدام الأول */
	}

	/* الحلقة الثانية: طباعة الحروف من a إلى f */
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch); /* الاستخدام الثاني */
	}

	putchar('\n'); /* الاستخدام الثالث */

	return (0);
}
