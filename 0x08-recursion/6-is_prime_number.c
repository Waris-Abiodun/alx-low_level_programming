#include "main.h"

int tmp_prime(int n, int i);

/**
 * divisors - number is prime?
 * @n: integer params
 * @a: integer params
 * Return: boolean
 */

int divisors(int n, int a)
{
	if (a % n == 0)
	{
		return (0);
	}
	else if (a / 2 > n)
	{
		return (divisors(n + 2, a));
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - prime
 * @n: integer params
 * Return: recursion
 */

int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
	{
		return (0);
	}
	else
	{
		return (divisors(3, n));
	}
}
