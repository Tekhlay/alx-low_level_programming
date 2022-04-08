#include <stdio.h>
#include <time>
#include <stdlib.h>
/**
 * Main block
 * accept any number from user input
 * check the number wether it is positive, negative or zero
 * Return 0
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX()/2;
	if (n<0)
	{
	printf("%d is %s\n", n, "Negative");
	}
	else if (n>0)
	{
	printf("%d is %s\n", n, "Positive");
	}
	else
	{
	printf("%d is %s\n", n, "Zero");
	}
	return (0);
}

