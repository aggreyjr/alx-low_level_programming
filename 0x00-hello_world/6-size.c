#include<stdio.h>

/**
 * main - various computer size
 * Return: 0(success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	float f;

	printf("Size of a char:%lu byte(s)\n", (unassigned long)sizeof(a));
	printf("Size of an int:%lu byte(s)\n", (unassigned long)sizeof(b));
	printf("Size of long int:%lu byte(s)\n", (unassigned long)sizeof(c));
	printf("Size of float:%li byte(s)\n", (unassigned long)sizeof(f));
	return (0);
}
