/*
	���� �� �Լ��� �̿��ؼ� 0�̻� 100�̸��� ������ �� 5�� �����ϴ� ������ �����,
	C++�� ����� �����ؼ� �ۼ��غ���.
	����� C����� ��� time �Լ��� <time.h>�� ����Ǿ� �ְ�,
	rand�Լ��� srand�Լ��� <stdlib.h>�� ����Ǿ� �ִ�.

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