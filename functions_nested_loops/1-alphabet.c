#include "main.h"

/**
 * print_alphabet - تطبع الحروف الأبجدية بالصغير
 *
 * الوصف: تستخدم هذه الدالة حلقة تكرار للمرور على جميع
 * الحروف من a إلى z وطباعتها، ثم سطر جديد.
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
