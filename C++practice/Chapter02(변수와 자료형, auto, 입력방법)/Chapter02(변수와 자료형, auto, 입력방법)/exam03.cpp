#include<iostream>
#include<string>
using namespace std;


int main(void) {

	int i = 100;
	float f = 100.117f;

	cout << i << endl;
	cout << f << endl;

	cout << "���� �ϳ��� �Է����ּ���. : ";
	cin >> i;
	cout << "�Է¹��� ������ : " << i << endl << endl;

	cout << "�Ǽ� �ϳ��� �Է����ּ���. : ";
	cin >> f;
	cout << "�Է¹��� �Ǽ��� : " << f << endl << endl;


	string str = "";
	cout << "���ڿ��� �Է����ּ���. : ";
	cin >> str;
	cout << "�Է¹��� ���ڿ� : " << str << endl << endl;

	return 0;
}