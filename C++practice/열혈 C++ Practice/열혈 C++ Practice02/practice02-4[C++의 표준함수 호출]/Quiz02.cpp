/*
	다음 세 함수를 이용해서 0이상 100미만의 난수를 총 5개 생성하는 예제를 만들되,
	C++의 헤더를 선언해서 작성해보자.
	참고로 C언어의 경우 time 함수는 <time.h>에 선언되어 있고,
	rand함수와 srand함수는 <stdlib.h>에 선언되어 있다.

	rand, srand, time
*/

#include<iostream>
#include<cstdio>
#include<ctime>
#include<cstdlib>
using namespace std;
#define RAND 5


int main(void)
{
	int randNum[RAND] = { 0 };
	int i = 0;
	
	srand((unsigned)time(NULL));

	for (i = 0; i < RAND; i++)
	{
		cout << rand()%100 << endl;
	}


	return 0;
}