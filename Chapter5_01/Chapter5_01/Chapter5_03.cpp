//#include <iostream>
//using namespace std;


//inline �� �⺻
//
//inline void cir_pro(int a);
//
//int main()
//{
//	int r = 5;
//	cir_pro(r);
//}
//inline void cir_pro(int a)
//{
//	cout << "���� ���� = " << a * a* 3.14 << endl;
//}

#include "datetime.h"

int main()
{
	cout << "����� �¾ ������ �Է��ϼ��� :";
	int birthyear;
	cin >> birthyear;
	calc_age(birthyear);
	int any = calc_zodiac(birthyear);
	calc_day(any);
	system("pause");
}