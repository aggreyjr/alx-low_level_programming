#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* storing numbers */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	m = n % 10;
	if (m > S)
		printf("Last digit of %d is %d and is greater than S\n", n, m);
	if (m == 0)
		printf
	return (0);
}
