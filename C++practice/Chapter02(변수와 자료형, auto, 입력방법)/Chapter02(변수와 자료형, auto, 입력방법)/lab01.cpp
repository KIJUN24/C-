/*
	���� �ǽ� ����-1
	ö���� ������ �ִ� ������ �ִ����� ������ ����� �Ѵ�.
	���� 1000���� �ְ� ������ ������ 300���̶�� ����.
	�ִ��� �� �� �ִ� ������ ������ ������ ���� ���ΰ�?
	������ ������ '/'�� ������ ������ '%'�� ����Ͽ� �Ʒ��� ���� ����� �ǵ��� ����
*/
/*
	��°��
	���� ������ �ִ� �� : 1000
	ĵ���� ���� : 300
	�ִ�� �� �� �ִ� ĵ���� ���� = 3
	ĵ�� ���� �� ���� �� = 100
*/

#include<iostream>
using namespace std;

int main(void) {

	int money = 0;
	int candy = 0;
	int get_candy = 0;
	int change = 0;

	cout << "������ �ִ� �� �Է� : ";
	cin >> money;
	cout << "���� ĵ�� ���� �Է� : ";
	cin >> candy;
	cout << endl;

	get_candy = money / candy;
	change = money % candy;

	cout << "���� ������ �ִ� �� : " << money << endl;
	cout << "ĵ���� ���� : " << candy << endl;
	cout << "�ִ�� �� �� �ִ� ĵ���� ���� = " << get_candy << endl;
	cout << "ĵ�� ���� �� ���� �� = " << change << endl;

	return 0;
}