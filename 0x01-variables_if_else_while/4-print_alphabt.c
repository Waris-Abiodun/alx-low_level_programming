#include <stdio.h>
/**
 * main -> write a letter from a-z in upper and lower case
 * Description:print the alphabet in lower case
 *
 * Return : Always 0 (Success)
 */

int main(void)
{
char f;
f = 'a';
while (f <= 'z')
{
	putchar(f);
}
if (f != 'q' && f != 'e')
{
	putchar(f);
	f++;
}
putchar('\n');
return (0);
}
