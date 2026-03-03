#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line.
 * For multiples of three, print Fizz instead of the number.
 * For multiples of five, print Buzz.
 * For multiples of both three and five, print FizzBuzz.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		/* Check for multiples of both 3 and 5 first */
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}
		/* Check for multiples of 3 */
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		/* Check for multiples of 5 */
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		/* Print the number if no conditions are met */
		else
		{
			printf("%d", i);
		}

		/* Print a space after each item, except after the number 100 */
		if (i < 100)
		{
			printf(" ");
		}
	}
	/* End with a newline */
	printf("\n");

	return (0);
}
