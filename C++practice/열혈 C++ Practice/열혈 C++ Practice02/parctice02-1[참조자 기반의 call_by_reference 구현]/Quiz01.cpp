/*
	����1
	�����ڸ� �̿��ؼ� ���� �䱸���׿� �����ϴ� �Լ��� ���� �����Ͽ���
		1) ���ڷ� ���޵� int�� ������ ���� 1�� ������Ű�� �Լ�
		2) ���ڷ� ���޵� int�� ������ ��ȣ�� �ٲٴ� �Լ�
	�׸��� ���� �� �Լ��� ȣ���Ͽ� �� ����� Ȯ���ϴ� main�Լ����� �ۼ��ض�
*/

#include<iostream>
using namespace std;

void plus_num(int& num);
void change_sign(int& num);

int main(void)
{
	int num_change = 0, num_plus = 0;

	cout << "������ �Է����ּ��� : ";
	cin >> num_change;

	plus_num(num_change);
	cout << "1���� �� : " << num_change << endl;
	
	cout << endl;

	cout << "0�� �ƴ� ������ �Է����ּ��� : ";
	cin >> num_plus;

	change_sign(num_plus);
	cout << "��ȣ ����� �� : " << num_plus << endl;

	return 0;
}

void plus_num(int& num)
{
	num += 1;
	return;
}

void change_sign(int& num)
{
	num *= (-1);
	return;
}