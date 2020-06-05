#include "weightmanage.h"

int main()
{
	weight wa;
	char irum[20];
	int b;
	cout << "고객의 성명과 성별을 입력하세요(1또는3: 남자, 2또는4 : 여자) : ";
	cin >> irum >> b;
	wa.calc_info(irum, b);
	int h, w;
	cout << "신장과 체중을 입력하세요 :";
	cin >> h >> w;
	wa.calc_stweight(h, w);
	wa.print();
}