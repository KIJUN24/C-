/*
	���� 3
	���ڸ� �ϳ� �Է� �޾Ƽ� �� ���ڿ� �ش��ϴ� �������� ����ϴ� ���α׷��� �ۼ��غ���.
	���� ��� ����ڰ� 5�� �Է��Ѵٸ� �����ܿ��� 5���� ����ؾ� �Ѵ�.
*/

#include<iostream>
using namespace std;

int main(void) {

	int dan = 0, result = 0;

	cout << "�� ���� ����ص帱���? ";
	cin >> dan;
	cout << endl;

	for (int i = 1; i < 10; i++) {
		result = dan * i;
		cout << dan << " X " << i << " = " << result << endl;
	}

	return 0;
}