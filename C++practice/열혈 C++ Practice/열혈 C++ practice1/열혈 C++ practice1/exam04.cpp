/*
	�Ǹſ����� �޿� ��� ���α׷��� �ۼ��غ���.
	�� ȸ��� ��� �Ǹſ����� �Ŵ� 50������ �⺻ �޿��� ��ǰ �Ǹ� ������ 12%�� �ش��ϴ� ���� �����Ѵ�.
	���� ��� �μ���� ģ���� �̹� �� ��ǰ �Ǹ� �ݾ��� 100�����̶��, 50+100X0.12=62.
	���� 62�����Ť��� �޿��� ���� �޴´�.
	��, �Ʒ��� ������ ������ ���̵��� �̷��� �޿��� ����� -1�� �Էµ� ������ ��� �Ǿ�� �Ѵ�.
*/

#include<iostream>
using namespace std;

int main(void) {

	int standard_salary = 0, input_salary = 0, result_salary = 0;

	while (1) {

		standard_salary = 50;

		cout << "�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end) : ";
		cin >> input_salary;

		result_salary = standard_salary + (input_salary * 0.12);

		if (input_salary < -1) {
			cout << "�Ǹ� �ݾ��� �ٽ� �Է����ּ���(0~)" << endl;
			continue;
		}

		if (input_salary == -1) {
			cout << "���α׷��� �����մϴ�.";
			break;
		}
		else {
			cout << "�̹� �� �޿� : " << result_salary << endl;
		}
	}

	return 0;
}