#include<iostream>

int main(void)
{
	int sell=0, salary = 50;

	while(1)
	{
		std::cout<<"�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end) : ";
		std::cin>>sell;
		if(sell == -1)
		{
			std::cout<<"���α׷��� �����մϴ�.\n";
			return -1;
		}
		salary += sell*0.12;
		std::cout<<"�̹� �� �޿� : "<<salary<<std::endl;
		salary = 50;
	}
	return 0;
}