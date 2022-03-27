#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

#define CHARMAX 100000

//strlen 대신 쓰는 함수
size_t Strlen(char*s)

{
	return strlen(s);
}

//시간 엄청 오래걸리는 버블소트
void Sorting(int list[], int n)
{
	int i, j, temp;

	for (i = n - 1; i > 0; i--) {
		// 0 ~ (i-1)까지 반복
		for (j = 0; j < i; j++) {
			// j번째와 j+1번째의 요소가 크기 순이 아니면 교환
			if (list[j] > list[j + 1]) {
				temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
			}
		}
	}
}


//문장 입력받기
void input(char *arr, int n)
{
	char origin[] = "If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.If were going to speak of rioting protesters, then we need to speak of rioting police as well.";
		//scanf("%[^\n]s", arr);
	strcpy(arr, origin);
}

//대문자를 소문자로 바꿔주는 함수
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

//arr[i]=와 i번째 알파벳이 일치하는지 확인하는 함수
bool isSame(int*arr, int i, int head)
{
	char c = i + 'a';
	if ((int)c == arr[head])
		return true;
	else return false;
}

//각각의 알파벳이 얼만큼 등장했는지 카운트 하기
//재귀함수를 이용해서 하나 카운트하고 다음것으로 넘어가기
void Counting(int*arr, int*res)//arr에서 수를 세서 res로 넘기기
{
	int cnt = 1;
	int head = 0;
	for (int i = 0; i < 26; i++)
	{
		while (1)
		{
			if (isSame(arr, i, head))//arr[i]와 a가 일치하는지 여부를 판단하는 함수
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

	//몇개의 단어(공백포함)을 입력받을지 숫자 n을 받자
	//그리고 그걸 모두 %c로 받은후에 캐피털라이즈 - 문자만 추려내기를 통해서 알파벳을 모은다.
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

	//arrMod를 int[]로 바꿔주어야함, 이것의 항의 개수를 m으로 두어서 그것도 인풋으로 넣기
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

	//이제 카운팅만 수정하면 완성됨 ㅅㅄㅂ

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


