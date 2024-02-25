/* 
	�ǽ� - 1
	���� : 1) ���� �� �ִ� ������ ���α׷����� �����͸� �����ϱ� ���� �޷θ� ������ �ǹ�.
		   2) ���� �����ϴ� �޸� ������ ���Ѵ�. 
		      ��, �ش� ������ Ÿ�Կ� ũ�⸸ŭ �����̶�� �޸� ���� �ȿ� �Ҵ��� �ް� 
			  �Ҵ���� ������ ���� �ٲپ� ���鼭 ���� �� �ִ� ��.
*/

#include<iostream>
#include<string>
using namespace std;

int main(void) {

	// �������� ���� ����
	int age = 0;

	// ������ ����ȭ �� �ʱ�ȭ ���
	int i{ 100 };  // int i = 100;
	short b = 0;

	// ������ �ּ� Ȯ��
	cout << "���� age�� �ּ� : "<< &age  << endl;
	cout << "���� i�� �ּ� : " << &i << endl;
	cout << "���� b�� �ּ� : " << &b << endl << endl;
	// ������ �޸� ���ÿ� �� ���������� �� ������ ã�� ����.
	// &(���ۼ�Ʈ) : �ּ� ���� ������.


	// �ڷ��� ũ��(sizeof(������ Ÿ��, ������))
	// to_string(����) : �������� ���ڿ� Ÿ������ ��������ִ� string ������Ͽ� �����ϴ� �޼ҵ��� ���� �ȴ�.
	cout << "char�� �ڷ����� ����Ʈ ũ�� : " + to_string(sizeof(char)) + "����Ʈ" << endl;
	cout << "short�� �ڷ����� ����Ʈ ũ�� : " + to_string(sizeof(short)) + "����Ʈ" << endl;
	cout << "int�� �ڷ����� ����Ʈ ũ�� : " + to_string(sizeof(int)) + "����Ʈ" << endl;
	cout << "long�� �ڷ����� ����Ʈ ũ�� : " + to_string(sizeof(long)) + "����Ʈ" << endl;
	cout << "long long�� �ڷ����� ����Ʈ ũ�� : " + to_string(sizeof(long long)) + "����Ʈ" << endl;
	cout << "float�� �ڷ����� ����Ʈ ũ�� : " + to_string(sizeof(float)) + "����Ʈ" << endl;
	cout << "double�� �ڷ����� ����Ʈ ũ�� : " + to_string(sizeof(double)) + "����Ʈ" << endl;
	cout << "long double�� �ڷ����� ����Ʈ ũ�� : " + to_string(sizeof(long double)) + "����Ʈ" << endl;
	cout << "bool�� �ڷ����� ����Ʈ ũ�� : " + to_string(sizeof(bool)) + "����Ʈ" << endl;

	return 0;
}