#include <iostream>

using namespace std;

int calc_weight(int a);
double calc_weight(int a, int b, double c = 0.9);
//������ �⺻���� �����ϸ� �ν����� ����

int main()
{
	int b = 100;
	double r = 0.9;
	cout << "Ű�� �Է��ϼ��� : ";
	int h;
	cin >> h;
	if (h >= 150)
	{
		cout << "ǥ�� ü����" << calc_weight(h, b) << endl;
	}
	else {
		cout << "ǥ�� ü����" << calc_weight(h) << endl;
	}
	return 0;
}

int calc_weight(int a)
{
	return a - 100;
}

double calc_weight(int a, int b, double c)
{
	return (a - b)*c;
}