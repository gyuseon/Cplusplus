#include "weightmanage.h"

int main()
{
	weight wa;
	char irum[20];
	int b;
	cout << "���� ����� ������ �Է��ϼ���(1�Ǵ�3: ����, 2�Ǵ�4 : ����) : ";
	cin >> irum >> b;
	wa.calc_info(irum, b);
	int h, w;
	cout << "����� ü���� �Է��ϼ��� :";
	cin >> h >> w;
	wa.calc_stweight(h, w);
	wa.print();
}