#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++) /* الحلقة الخارجية للتكرار 10 مرات */
	{
		for (j = 0; j <= 14; j++) /* الحلقة الداخلية لطباعة الأرقام من 0 لـ 14 */
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0'); /* الاستخدام الأول: لطباعة خانة العشرات */
			}
			_putchar((j % 10) + '0'); /* الاستخدام الثاني: لطباعة خانة الآحاد */
		}
		_putchar('\n'); /* الاستخدام الثالث: للسطر الجديد بعد كل تكرار */
	}
}
