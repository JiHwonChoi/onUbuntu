#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#pragma warning(disable: 4996)

int main() {
	char*str1 = (char*)malloc((sizeof(char)) * 30);
	char*str2 = (char*)malloc((sizeof(char)) * 30);
	int i,j=0;
	printf("Input String1:");
	scanf("%[^\n]", str1);
	
	printf("Input String1:");
	scanf(" %[^\n]", str2);
	
	i = strlen(str1);
	str1[i] = 32;
	for (i=i+1; i < (strlen(str1) + strlen(str2)); i++)
	{
		str1[i] = str2[j];
		j++;
	}

	printf("%s", str1);
	
	return 0;
}