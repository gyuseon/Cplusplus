#include <iostream>

using namespace std;


void HAB()
{
	cout << "Let's check" << endl;
}

void HAB(int a)
{
	int gab = 0;
	for (int b = 1; b <= a; gab += b++);
	cout << "1부터" << a << "까지의 합은 : " << gab << endl;
}

void HAB(int a, int b)
{
	int gab = 0;
	for (int c = a; c <= b; gab += c++);
	cout<<a << "~" << b << "= " << gab << endl;
}

//완 (a 시작 값) (b 마지막 값) (c 증가값)
void HAB(int a, int b,int c)
{
	int gab = 0;
	for (int d = a; d <= b; d+=c) gab+=d;
	cout << a << "~" << b << " " << c << " 만큼 증가"<<"=" << gab << endl;
}

void main()
{
	HAB();
	HAB(10);
	HAB(1,10);
	HAB(10,20);
	HAB(1,10,2);
	system("pause");
}