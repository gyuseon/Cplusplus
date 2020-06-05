#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
	int a = 10; // int형 변수의 선언과 초기화(a1111110)
	int *pi; //포인터 선언 (a2222220)
	int **ppi; // 2중 포인터 선언 (a3333330)

		pi = &a; //int형 변수의 주소를 포인터로 저장 (a,pi=a11111110)
		ppi = &pi;

		cout << "===================================" << endl;
		cout << "변수" << setw(12) << "주소값" << setw(10) <<  "*연산" << setw(10) << "**연산" << endl;
		cout << "===================================" << endl;
		cout << a << setw(16) << &a << endl;
		cout << pi << setw(10) << &pi << setw(10) << *pi << endl;
		cout << ppi << setw(10) << setw(10) << &ppi << setw(10) << *ppi << setw(10) <<**ppi<< endl;

		return 0;
		
}