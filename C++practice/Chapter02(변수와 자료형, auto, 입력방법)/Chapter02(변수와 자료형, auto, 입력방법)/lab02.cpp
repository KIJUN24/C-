/*
	���� �ǽ� ����-2
	ȭ�� �µ��� ���� �µ��� �ٲ��
	���� �µ� = 5/9(ȭ���µ� - 32)  -> ����
	ȭ�� �µ��� ��������� �Է� �޵��� �Ѵ�.

	��°��
	ȭ���µ� 60���� �����µ� 15.5556�Դϴ�.
*/

#include<iostream>
using namespace std;

int main(void) {

	int ft = 0;
	double ct = 0.0;

	cout << "ȭ���µ��� �Է����ּ��� : ";
	cin >> ft;
	
	const double i = 5.0 / 9.0;
	ct = i * (ft - 32);

	cout << "ȭ���µ� " << ft << "�� �����µ� " << ct << "�Դϴ�." << endl;

	return 0;
}