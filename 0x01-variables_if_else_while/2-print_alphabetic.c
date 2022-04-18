#include <stdio.h>
/**
 * Main print all alphabets in lower case
 * return 0 on success
 */
int main(void)
{
	char i;
	for (i='a';i<='z';i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
