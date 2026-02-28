#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase, then uppercase
 * using putchar only three times.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char low = 'a';
	char up = 'A';

	/* الحلقة الأولى: الحروف الصغيرة */
	while (low <= 'z')
	{
		putchar(low); /* الاستخدام الأول */
		low++;
	}

	/* الحلقة الثانية: الحروف الكبيرة */
	while (up <= 'Z')
	{
		putchar(up); /* الاستخدام الثاني */
		up++;
	}

	putchar('\n'); /* الاستخدام الثالث */

	return (0);
}
