#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

#define CHARMAX 100000

//strlen ��� ���� �Լ�
size_t Strlen(char*s)

{
	return strlen(s);
}

//�ð� ��û �����ɸ��� �����Ʈ
void Sorting(int list[], int n)
{
	int i, j, temp;

	for (i = n - 1; i > 0; i--) {
		// 0 ~ (i-1)���� �ݺ�
		for (j = 0; j < i; j++) {
			// j��°�� j+1��°�� ��Ұ� ũ�� ���� �ƴϸ� ��ȯ
			if (list[j] > list[j + 1]) {
				temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
			}
		}
	}
}


//���� �Է¹ޱ�
void input(char *arr, int n)
{
	char origin[] = "If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.";
		//scanf("%[^\n]s", arr);
	strcpy(arr, origin);
}

//�빮�ڸ� �ҹ��ڷ� �ٲ��ִ� �Լ�
void convertCapital(char*arr)
{
	int Capi = 'a' - 'A';
	for (int i = 0; i < Strlen(arr); i++)
	{
		int d = arr[i];
		if (64 < d&& d < 91)
		{
			arr[i] += Capi;
		}
	}
}

int head = 0;
int mem = 0;

//arr[i]=�� i��° ���ĺ��� ��ġ�ϴ��� Ȯ���ϴ� �Լ�
bool isSame(int*arr, int i, int head)
{
	char c = i + 'a';
	if ((int)c == arr[head])
		return true;
	else return false;
}

//������ ���ĺ��� ��ŭ �����ߴ��� ī��Ʈ �ϱ�
//����Լ��� �̿��ؼ� �ϳ� ī��Ʈ�ϰ� ���������� �Ѿ��
void Counting(int*arr, int*res)//arr���� ���� ���� res�� �ѱ��
{
	int cnt = 1;
	int head = 0;
	for (int i = 0; i < 26; i++)
	{
		while (1)
		{
			if (isSame(arr, i, head))//arr[i]�� a�� ��ġ�ϴ��� ���θ� �Ǵ��ϴ� �Լ�
			{
				res[i] += cnt;
				head += cnt;
			}
			else break;
		}
	}


}

void Printnum(int*res)// how many times each alphabet used
{
	
	for (int i = 0; i < 26; i++)
	{
		printf("%c: %d\n",(char)i+'a', res[i]);
		
	}
}

void onlyAlpha(char*arr, char*arrMod)
{
	int modcnt = 0;

	for (int i = 0; i < Strlen(arr); i++)
	{
		if (96 < arr[i] && arr[i] < 123)
		{
			arrMod[modcnt] = arr[i];
			modcnt++;
		}
	}
	arrMod[modcnt] = '\0';
}

void Change(char*arr, int*omg, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > 96 && arr[i] < 123)
			omg[i] = (int)arr[i];
		else break;
	}
}

void main()
{

	//��� �ܾ�(��������)�� �Է¹����� ���� n�� ����
	//�׸��� �װ� ��� %c�� �����Ŀ� ĳ���ж����� - ���ڸ� �߷����⸦ ���ؼ� ���ĺ��� ������.
	int n=1000000;
	//scanf("%d", &n);

	char*arr = (char*)malloc(sizeof(char)*(n + 1));
	char*arrMod = (char*)malloc(sizeof(char)*(n + 1));

	input(arr, n);

	convertCapital(arr);
convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);
convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);
convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);
convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);
convertCapital(arr);convertCapital(arr);
convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);
convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);
convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);
convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);
convertCapital(arr);convertCapital(arr);
convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);
convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);
convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);
convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);
convertCapital(arr);convertCapital(arr);
convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);
convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);
convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);
convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);
convertCapital(arr);convertCapital(arr);
convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);
convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);
convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);
convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);
convertCapital(arr);convertCapital(arr);
convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);
convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);
convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);
convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);
convertCapital(arr);convertCapital(arr);
convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);
convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);
convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);
convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);
convertCapital(arr);convertCapital(arr);
convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);
convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);
convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);
convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);
convertCapital(arr);convertCapital(arr);
convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);
convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);
convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);
convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);
convertCapital(arr);convertCapital(arr);
convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);
convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);
convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);
convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);
convertCapital(arr);convertCapital(arr);
convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);
convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);
convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);
convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);convertCapital(arr);
convertCapital(arr);

//take only alphabet
	onlyAlpha(arr, arrMod);
onlyAlpha(arr, arrMod);onlyAlpha(arr, arrMod);onlyAlpha(arr, arrMod);onlyAlpha(arr, arrMod);
onlyAlpha(arr, arrMod);onlyAlpha(arr, arrMod);onlyAlpha(arr, arrMod);onlyAlpha(arr, arrMod);onlyAlpha(arr, arrMod);



	//printf("%s\n\n", arrMod);

	//arrMod�� int[]�� �ٲ��־����, �̰��� ���� ������ m���� �ξ �װ͵� ��ǲ���� �ֱ�
	int*omg = (int*)malloc(sizeof(int) * 27);
	Change(arrMod, omg, strlen(arrMod));
Change(arrMod, omg, strlen(arrMod));Change(arrMod, omg, strlen(arrMod));Change(arrMod, omg, strlen(arrMod));Change(arrMod, omg, strlen(arrMod));
Change(arrMod, omg, strlen(arrMod));Change(arrMod, omg, strlen(arrMod));Change(arrMod, omg, strlen(arrMod));Change(arrMod, omg, strlen(arrMod));Change(arrMod, omg, strlen(arrMod));

	//for (int i = 0; i < n; i++)
	//{
	//	if (omg[i] > 96 && omg[i] < 123)
	//	printf("%d\n", omg[i]);
	//	else break;
	//}

	int res[27] = { 0, };
	Sorting(omg, strlen(arrMod));
Sorting(omg, strlen(arrMod));Sorting(omg, strlen(arrMod));Sorting(omg, strlen(arrMod));

	//for (int i = 0; i < n; i++)
	//{
	//	if (omg[i] > 96 && omg[i] < 123)
	//		printf("%d\n", omg[i]);
	//	else break;
	//}

	//���� ī���ø� �����ϸ� �ϼ��� ������

	//for(int i =0;i<26;i++)
	Counting(omg, res);
Counting(omg, res);Counting(omg, res);Counting(omg, res);Counting(omg, res);Counting(omg, res);
Counting(omg, res);Counting(omg, res);Counting(omg, res);Counting(omg, res);Counting(omg, res);
Counting(omg, res);Counting(omg, res);Counting(omg, res);Counting(omg, res);Counting(omg, res);
Counting(omg, res);Counting(omg, res);Counting(omg, res);Counting(omg, res);
Counting(omg, res);



	//for (int i = 0; i < 26; i++)
	//	printf("%d\n", res[i]);



	Printnum(res);

	return;

}


