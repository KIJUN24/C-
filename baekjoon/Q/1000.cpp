/*
	�� ���� A�� B�� �Է¹��� ���� A+B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	�Է� : ù° �ٿ� A�� B�� �־�����.(0<A, B<10)
	��� : ù�� �ٿ� A+B�� ����Ѵ�.
*/

#include<iostream>
using namespace std;

int main(void)
{
	int a = 0, b = 0, hap = 0;

	cin >> a;
	cin >> b;
	if (0 < a && b < 10)
	{
		hap = a + b;
		cout << hap;
	}


	return 0;
}