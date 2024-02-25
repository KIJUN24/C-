/*
	auto Ű���� : �ڵ�������� �ǹ̹ۿ� �������� C++11 auto�� �ǹ̰� �ٲ����.
	�ڷ����� ������ �� ����� �� �ִ� Ű����� auto�̴�.
	�ڵ� Ÿ�� �߷�(automatic type deduction)
*/

#include<iostream>
#include<string>
using namespace std;

// �Լ������� �Ű������δ� auto�� ����� �� ����.
auto add(int x, int y) {
	return x + y;
}


int main(void) {
	
	double d = 1.0;
	auto ad_1 = 1.8;	// �ڵ� Ÿ�� �߷п� �ٰ��Ͽ� ���ԵǴ� ���� ���� �ڷ����� �ٲ�� �ִ�.
	auto ad_2 = 1;
	auto ad_3= 'z';
	auto ad_4 = "ad_4";


	cout << "���� d�� ����Ʈ : " << sizeof(d) << endl;
	cout << "���� ad�� ����Ʈ : " << sizeof(ad_1) << endl;
	cout << "���� ad�� ����Ʈ : " << sizeof(ad_2) << endl;
	cout << "���� ad�� ����Ʈ : " << sizeof(ad_3) << endl;
	cout << "���� ad�� ����Ʈ : " << sizeof(ad_4) << endl << endl;

	int result = 0;
	result = add(5, 6);

	cout << "add()�Լ� ȣ�� : " << add(5, 6) << endl;
	cout << "add()�Լ� ȣ�� : " << add(5, 6) << endl;
	cout << "add()�Լ��� ����Ʈ �� : " << sizeof(result) << endl;


	return 0;


}