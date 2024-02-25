/*
	다음 표준함수를 호출하는 예제를 만들되,
	C++의 헤더를 선언해서 만들어보자.
	예제의 내용은 사오간이 없지만, 아래의 함수들은 최소 1회 이상 호출해야 한다.
	참고로 다음 함수들은 C언어의 경우 <string.h>에 선언되어 있다.

		strlen : 문자열의 길이 계산
		strcat : 문자열의 뒤에 붙이기
		strcpy : 문자열 복사
		strcmp : 문자열의 비교
*/

#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main(void)
{
	char str1[] = "string";
	char str2[30] = " ";
	char str3[30] = "abcdefg";
	int count = 0;
	char str3_plus[] = "ABCDEFG";
	int cmp = 0;

	count = strlen(str1);
	cout << "strlen(길이 계산) : " << count << endl;

	strcat_s(str3, str3_plus);
	cout << "strcat : " << str3 << endl;

	strcpy_s(str2, str1);
	cout << "strcpy str1 : " << str1 << endl;
	cout << "strcpy str2 : " << str2 << endl;

	cmp = strcmp(str1, str3);
	cout << "strcmp : " << cmp << endl;

	return 0;
}