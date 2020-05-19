#include < iostream>

using namespace std;

void main()
{
	/*int a, b;
	cout << "첫번쨰 숫자를 입력하세요 : ";
	cin >> a;
	cout << "두번쨰 숫자를 입력하세요 : ";
	cin >> b;
	cout << "a= " << a << endl << "b =" << b << endl;
	cout << "Large number = ";
	a > b ? cout << a << "이(가) 더 크다" << endl
		: cout << b << "이(가) 더 크다 " << endl;*/

	//int i, j,k, max, min;
	//cout << "숫자 3개를 입력하세요 : ";
	//cin >> i >> j >> k;
	//max = /*(i > j) ? ((i > k) ? i : k) : ((j > k) ? j:k) ;*/
	//	i > (j > k ? max = j : max = k) ? max = i : max;
	//min = /*(i < j) ? ((i < k) ? i : k) : ((j < k) ? j : k);*/
	//i > (j > k ? min = k : min = j) ?   min : min = i;
	//cout << "max = " << max << endl;
	//cout << "min = " << min << endl;

	int n, n1, n2, n3, n4, n5;
	cout << "다섯자리 수를 입력 하세요 : ";
	cin >> n;
	cout << n << "은" << endl;
	n1 = n / 10000;
	n = n - n1 * 10000;
	n2 = n / 5000;
	n = n - n2 * 5000;
	n3 = n / 1000;
	n = n - n3 * 1000;
	n4 = n / 500;
	n = n - n4 * 500;
	n5 = n / 100;
	n = n - n5 * 100;

	cout << "만원짜리 = " << n1 << endl;
	cout << "오천원짜리 = " << n2 << endl;
	cout << "천원짜리 = " << n3 << endl;
	cout << "오백원짜리 = " << n4 << endl;
	cout << "백원짜리 = " << n5 << endl;
	

}