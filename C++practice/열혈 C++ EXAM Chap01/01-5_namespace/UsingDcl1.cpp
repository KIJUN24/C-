#include<iostream>
using namespace std;

namespace Hybrid
{
	void HybFunc(void)
	{
		cout << "So simple Function!" << endl;
		cout << "In namespace Hybrid!" << endl;
	}
}

int main(void)
{
	using Hybrid::HybFunc;
	// usingŰ���带 �̿��� '�̸�����(namespace) Hybrid�� ���ǵ� HybFunc��
	// ȣ���� ������, �̸������� �������� �ʰ� ȣ���ϰڴ�.'��� ���� ���(����)�ϰ� �ִ�.
	// �������� ����� ������ ȿ���� ���´�.
	// ���α׷� ��ü������ ȿ���� ��ġ�� �Ϸ��� ���������� ���������� �Լ� �ۿ� ������ �ؾ� �Ѵ�.

	HybFunc();
	// using������ ���� �̸������� ���� ���� HybFunc�Լ��� ȣ���ϰ� �ִ�.
	return 0;
}