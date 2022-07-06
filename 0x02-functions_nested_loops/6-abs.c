#include "main.h"
/**
 * _abs - let test this new method of getting positive return
 * @n: the parameter
 * Description: I am going to be a ullstack software engineer in a yeartime
 * Return: last digit
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (0);
	}
}
