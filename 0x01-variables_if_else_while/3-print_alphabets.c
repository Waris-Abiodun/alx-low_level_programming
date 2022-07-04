#include <stdlib.h>
#include <stdio.h>

/**
 * main - write a letter from a-z in upper and lower case
 * Description: print the alphabet in lower case
 * return: 0
 */
int main(void)
{
char c;
c = 'a';
while (c <= 'z')
{
	putchar(c);
	c++;
}
c = 'A';
while (c <= 'Z')
{
	putchar(c);
	c++;
}
putchar('\n');
return (0);
}
