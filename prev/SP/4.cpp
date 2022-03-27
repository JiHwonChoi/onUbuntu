#include<stdio.h>
#include<string.h>


int main()
{
	unsigned char c;
	while ((c = getchar()) != EOF)
		putchar(c);
	return 0;
}
