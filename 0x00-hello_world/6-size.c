#include<stdio.h>

/**
 * main - various computer size
 * Return: 0(success)
 */
int main(void)
{
	printf("Size of a char:%zu byte(s)\n", sizeof(char));
	printf("Size of an int:%zu byte(s)\n", sizeof(int));
	printf("Size of long int:%zu byte(s)\n", sizeof(long int));
	pritnf("Size of long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of float:%zu byte(s)\n", sizeof(float));
	return (0);
}
