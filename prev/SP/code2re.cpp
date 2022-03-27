#include<stdio.h>

int sum_array(int a[], unsigned len)
{
	int i;
	int result = 0;

	for (i = 0; i <= len - 1; i++)
		result += a[i];

	return result;
}
int main() {
	int a[10] = { 1,2,3,4,5,6,7 };
	unsigned sumlen = 0;
	int result = 0;

	result = sum_array(a,sumlen);
	printf("%d", result);

	return 0;
}

