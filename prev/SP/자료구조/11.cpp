#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable: 4996)
int main() {
	printf("Input array elements:");
	int arrlen = 6;
	int idx=0;
	int cnt;
	int*arr = (int*)malloc(sizeof(int)*arrlen);
	while (1)
	{
		scanf("%d", &arr[idx]);
		if (idx==4)
			break;
		idx++;
	}
	printf("Input element to insert:");
	int inst;
	scanf("%d", &inst);
	printf("Input position where to insert:");
	int pos;
	scanf("%d", &pos);

	if ((pos < 1) || (pos > arrlen))
	{
		printf("ERROR!");
		return 0;
	}

	for (idx; idx >= pos - 1; idx--) {
		arr[idx+1] = arr[idx];
	}
	arr[idx + 1] = inst;

	for (cnt = 0; cnt < arrlen; cnt++)
	{
		printf("%d ", arr[cnt]);
	}
	return 0;
}