#include <iostream>

using namespace std;

int calc_weight(int a);
double calc_weight(int a, int b, double c = 0.9);
//변수에 기본값을 선언하면 인식하지 않음

int main()
{
	int b = 100;
	double r = 0.9;
	cout << "키를 입력하세요 : ";
	int h;
	cin >> h;
	if (h >= 150)
	{
		cout << "표준 체중은" << calc_weight(h, b) << endl;
	}
	else {
		cout << "표준 체중은" << calc_weight(h) << endl;
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