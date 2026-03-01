#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			/* طباعة عشرات الساعات */
			_putchar((hour / 10) + '0');
			/* طباعة آحاد الساعات */
			_putchar((hour % 10) + '0');
			/* طباعة النقطتين */
			_putchar(':');
			/* طباعة عشرات الدقائق */
			_putchar((minute / 10) + '0');
			/* طباعة آحاد الدقائق */
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}
}
