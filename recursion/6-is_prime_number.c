#include "main.h"

/**
 * check_prime - checks recursively if n is divisible by i.
 * @n: the number to check.
 * @i: the current divisor to test.
 *
 * Return: 1 if prime, 0 if not.
 */
int check_prime(int n, int i)
{
	/* If we reached the number itself, it's prime */
	if (i == n)
		return (1);

	/* If n is divisible by i, it's not prime */
	if (n % i == 0)
		return (0);

	/* Check the next divisor */
	return (check_prime(n, i + 1));
}

/**
 * is_prime_number - returns 1 if the input is a prime number.
 * @n: the number to check.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	/* Numbers <= 1 are not prime */
	if (n <= 1)
		return (0);

	/* Start checking divisibility from 2 */
	return (check_prime(n, 2));
}
