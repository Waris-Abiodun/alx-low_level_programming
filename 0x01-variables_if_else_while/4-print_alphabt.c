#include <stdlib.h>
#include <stdio.h>
/**
 * main -> write a letter from a-z in upper and lower case
 * Description: print the alphabet in lower case
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str;

	for (str = 'a' ; str <= 'z' ; str++)
	{
		if (str != 'q' && str != 'e')
		{
			putchar(str);
		}
	}
	putchar('\n');
	return (0);
}
