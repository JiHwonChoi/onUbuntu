#include<stdio.h>
#include<string.h>


int strlonger(char*s, char*t)
{
	return strlen(s)>strlen(t) ;
}

int main() {
	char a[] = "Hello";
	char b[] = "abcdef";

	int k = strlonger(a, b);
	int j = strlen(a);
	int l = strlen(b);

	printf("strlonger: %d\nstrlen(a): %d\nstrlen(b):%d\n", k,j,l);
	return 0;
}
