/*
	page22 ����01
	����ڷκ��� �� 5���� ������ �Է� �޾Ƽ�,
	�� ���� ����ϴ� ���α׷��� �ۼ��غ���.
	��, ���α׷��� ������ ���� �̷����� �Ѵ�.

	������
	1��° ���� �Է�: 1
	2��° ���� �Է�: 2
	3��° ���� �Է�: 3
	4��° ���� �Է�: 4
	5��° ���� �Է�: 5
	�հ�: 15
*/

#include<iostream>
using namespace std;

int main(void) {

	int input_num = 0, sum = 0;

	for (int i = 1; i <= 5; i++) {
		cout << i << "��° ���� �Է�: ";
		cin >> input_num;
		sum += input_num;
	}
	cout << endl;

	cout << "�հ�: " << sum << endl;

	return 0;
}