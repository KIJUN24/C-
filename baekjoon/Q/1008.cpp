// �� ���� A�� B�� �Է¹��� ����, A/B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
// �Է� : ù° �ٿ� A�� B�� �־�����.(0<A, B<10)
// ��� : ù° �ٿ� A/B�� ����Ѵ�. ���� ����� ��°��� ������� �Ǵ� �������� 10-9 �����̸� �����̴�

#include<iostream>
using namespace std;

int main(void)
{
    double a = 0.0, b = 0.0, c = 0;
    cin >> a >> b;


    if (a > 0 && b < 10)
    {
        cout.precision(10);
        cout << a/(double)b << endl;
    }

    return 0;
}

