#include<iostream>
using namespace std;

int main(void)
{
	int num = 12;
	int* ptr = &num;
	int** dptr = &ptr;

	int& ref = num;
	int* (pref) = ptr;
	int** (&dpref) = dptr;		// ������ ������ ������ ���� & �����ڸ� �ϳ� �� �߰��ϴ� ���·� ������ �ȴ�.

	cout << ref << endl;
	cout << *pref << endl;		// pref�� ������ ���� ptr�� �������̹Ƿ�, ���� num�� ����� ���� ��µȴ�.
	cout << **dpref << endl;	// dpref�� ������ ���� dptr�� �������̹Ƿ�, ���� num�� ����� ���� ��µȴ�.

	return 0;
}