/*
	step01 ������

	-----Menu-----
	1. ���°���
	2. �� ��
	3. �� ��
	4. �������� ��ü ���
	5. ���α׷� ����

	����(1~5���� ������ �Է����ּ���) : 2

	[��   ��]
	����ID : 115
	�Աݾ� : 70
	�ԱݿϷ�

	-----Menu-----
	1. ���°���
	2. �� ��
	3. �� ��
	4. �������� ��ü ���
	5. ���α׷� ����

	����(1~5���� ������ �Է����ּ���) : 4

	[��������]
	����ID : 115
	�� �� : �̱���
	�� �� : 15070
*/
#include<iostream>
using namespace std;

void MenuPrint(void);
void make_account(void);
int choice_menu(void);
void deposit_money(void);
void withdraw_money(void);
void program_end(void);


static int money = 0, id = 0;
static char name[] = { ' ' };


int main(void)
{
	int choice = 0;

	do
	{
re:		MenuPrint();
		choice = choice_menu();
		cout << choice << endl;
		switch (choice)
		{
			case 1:
				make_account();
				cout << id << endl;
				cout << name << endl;
				cout << money << endl;
				goto re;

			/*case 2:
				withdraw_money();*/

			case 5:
				program_end();
				break;

			default:
				cout << "�ٽ� �Է����ּ���" << endl;
				goto re;
		}
		
		if (choice == 5)
		{
			break;
		}

	} while (1);
	
	return 0;
}

void MenuPrint(void)
// �Ŵ��� �����ִ� �Լ�
{
	cout << "-----Menu-----" << endl;
	cout << "1. ���°���" << endl;
	cout << "2. �� ��" << endl;
	cout << "3. �� ��" << endl;
	cout << "4. �������� ��ü ���" << endl;
	cout << "5. ���α׷� ����" << endl;

	return;
}

int choice_menu(void)
// ���� �Է��ϴ� �Լ�
{
	int choice = 0;
	cout << endl;
	cout << "(1~5 �߿��� ������ �Է����ּ���.) ���� : ";
	cin >> choice;
	return choice;
}

void make_account(void)
{

	cout << "[���°���]" << endl;
	cout << "����ID : ";
	cin >> id;
	cout << "�̸� : ";
	cin >> name;
	getchar();
	cout << "�Աݾ� : ";
	cin >> money;

	return;
}

void program_end(void)
{
	cout << "���α׷��� �����մϴ�." << endl << endl;
	return;
}