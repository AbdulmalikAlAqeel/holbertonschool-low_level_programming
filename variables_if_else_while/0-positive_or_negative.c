#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - نقطة الدخول للبرنامج
 *
 * الوصف: يقوم البرنامج بتوليد رقم عشوائي ويتحقق ما إذا كان
 * موجباً أم سالباً أم صفراً.
 * Return: دائماً 0 (نجاح)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* منطق التحقق من الرقم n */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
