#include <stdlib.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - main block
 * Description: Get a random number and check its last digit, compareit with 5
 * Return: (0)
 */

int main(void)

{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;

	if (last > 5)
		printf("Last digit of %i is %i and greater than 5\n", n, last);
	else if (last == 0)
		printf("Last digit of %i is %i and is 0\n", n, last);
	else(last < 6)
		Printf("Last digit of %i is %i and less than 6", n, last);

	return (0);
}
