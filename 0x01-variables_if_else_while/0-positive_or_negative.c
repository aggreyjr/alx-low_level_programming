#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 /**
  * main - determine if a number is positive or negative
  * Return: 0(succes)
  */
int main(void) {
    int n;

    srand(time(0));
    n = rand();

    printf("Last digit of %d is ", n);

    int lastDigit = n % 10;

    if (lastDigit > 5) {
        printf("and is greater than 5\n");
    } else if (lastDigit == 0) {
        printf("and is 0\n");
    } else {
        printf("and is less than 6 and not 0\n");
    }

    return 0;
}
