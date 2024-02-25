/*
	int main(void)
	{
		int num1=5;
		int *ptr1=&num1;
		int num2=10;
		int *ptr2=&num2;

		...

	}
	���� �ڵ带 ���� ptr1�� ptr2�� ���� num1�� num2�� ����Ű�� �ִ�.
	�� �� ptr1�� ptr2�� ������� ������ ���� �Լ��� ȣ���ϰ� ����,
	SwapPointer(ptr1, ptr2);
	ptr1�� ptr2�� ����Ű�� ����� ���� �ٲ�� SwapPointer �Լ��� ������ ����.
*/

//#include<iostream>
//using namespace std;
//
//void SwapPointer(int& ptr1, int& ptr2);
//
//int main(void)
//{
//	int num1 = 5;
//	int* ptr1 = &num1;
//	int num2 = 10;
//	int* ptr2 = &num2;
//
//	cout << "[�Լ� ���� ��]" << endl;
//	cout << "ptr1�� ����Ű�� ��� : " << *ptr1 << endl;
//	cout << "ptr2�� ����Ű�� ��� : " << *ptr2 << endl;
//	cout << endl;
//	cout << "ptr1�� ����Ű�� �ּҰ� : " << ptr1 << endl;
//	cout << "ptr2�� ����Ű�� �ּҰ� : " << ptr2 << endl;
//
//	cout << endl;
//	cout << "[�Լ� ���� ��]" << endl;
//
//	SwapPointer(num1, num2);
//	cout << "ptr1�� ����Ű�� ��� : " << *ptr1 << endl;
//	cout << "ptr2�� ����Ű�� ��� : " << *ptr2 << endl;
//	cout << endl;
//	cout << "ptr1�� ����Ű�� �ּҰ� : " << ptr1 << endl;
//	cout << "ptr2�� ����Ű�� �ּҰ� : " << ptr2 << endl;
//
//	return 0;
//}
//
//void SwapPointer(int& ptr1, int& ptr2)
//{
//	int temp = ptr1;
//	ptr1 = ptr2;
//	ptr2 = temp;
//	return;
//}

// ��


#include<iostream>
using namespace std;

void SwapPointer(int* (&pref1), int* (&pref2))
{
	int* ptr = pref1;
	pref1 = pref2;
	pref2 = ptr;
}

int main(void)
{
	int num1 = 5;
	int* ptr1 = &num1;

	int num2 = 10;
	int* ptr2 = &num2;

	cout << *ptr1 << endl;
	cout << *ptr2 << endl;

	SwapPointer(ptr1, ptr2);

	cout << *ptr1 << endl;
	cout << *ptr2 << endl;

	return 0;
}