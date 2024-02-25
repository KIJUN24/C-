/*
	const �����Ϳ� ���� ������ ���� �� �ִ� ������ �����ϰڴ�.
	������ ��������� ����.
	
	const int num = 12;

	1. ������ ������ �����ؼ� �� ������ ����Ű�� �غ���.
	2. �׸��� �� ������ ������ �����ϴ� �����ڸ� �ϳ� ��������.
	3. ���������� �̷��� ����� ������ ������ �����ڸ� �̿��ؼ� num�� ����� ���� ����ϴ� ������ �ϼ��غ���.
*/

#include<iostream>
using namespace std;

int main(void)
{
	const int num = 12;

	const int* ptr = &num;	// 1

	const int& ref = num;	// 2
	

	// 3
	cout << "num : " << num << endl;
	cout << "ptr : " << *ptr << endl;
	cout << "ref : " << ref << endl;
	cout << endl;
	cout << "num �ּ� : " << &num << endl;
	cout << "ptr �ּ� : " << ptr << endl;
	cout << "ref �ּ� : " << &ref << endl;

	return 0;
}