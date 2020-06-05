#include <iostream>

using namespace std;


/* 1.
   포인트 : 주소를 저장하는 변수
   int a =4cffa3 ==> *a
   값을 저장하는 변수
   int a =10 ==> a
	
   2.
   char* a,b ==> char *a; char *b;
   char *a,b ==> char *a; char b;

   3.
   int* A: 4바이트 10ffc4
   A=A++ :  8바이트 10ffc8

   int* B: 4바이트 55fc48
   B=B-- :  4바이트 55fc44 */


//int *p, *q, a = 10, b = 20, tmp;
//
//void main()
//{
//	p = &a; // p는 a의 주소를 받음  &a = 주소를 보내줌 p=10
//	q = &b; // q = 20
//
//	tmp = *p; //p=10 *p은 a의 10 값을 받아옴 tmp = 10, p= 없음
//	*p = *q; // p= 20 , q= 없음
//	*q = tmp; // q= 10 ,tmp = 없음
//	cout << a<<"," << b;  // 그러므로  p= 20 , q =10  ==> a =20, b =10
//}

//int main()
//{
//	//#1.
//	/*int a;
//	a = 10;
//
//	cout << "변수 a의 값은 :" << a << endl;
//	cout << "변수 a의 주소는 :" << &a << endl;
//*/
//	//#2.
//	//int a;
//	//int* pA;
//
//	//a = 10;
//	//pA = &a; // pA = a 의 주소 *pA = a 의 값
//
//	//cout << "변수 a의 값은 :" << a << endl;    // 10
//	//cout << "변수 a의 주소는 :" << &a << endl; // 주소
//	//cout << "변수 pA의 값은 :" << pA << endl; // 주소
//	//cout << "pA의 값은 :" << *pA << endl;     // 10
//
//	//#3.
//	int a = 100;
//	int *pa;
//	
//	//a 변수방을 이용하여 출력
//	cout << "변수 a의 값은 :" << a << endl;    // 10
//	cout << "변수 a의 주소는 :" << &a << endl; // 주소
//	//pa를 이용하여 출력
//	pa = &a;
//	cout << "pa의 주소는 :" << pa << endl;   
//	cout << "pa의 값은 :" << *pa << endl;
//
//	*pa = 50; // 값을 받고 싶을때는 앞에 *(포인트)
//	cout << "pa의 주소는 :" << pa << endl;
//	cout << "pa의 값은 :" << *pa << endl;
//
//
//	
//
//
//}

void sw(int *a,int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;


}

int main()
{
	int a = 10;
	int b = 100;

	cout << "변수 a의 값 : " << a << endl;
	cout << "변수 b의 값 : " << b << endl;
	cout << "변수 a,b 값 교환~~ "  << endl;
	sw(&a, &b);
	cout << "교체 후 변수 a의 값 : " << a << endl;
	cout << "교체 후 변수 b의 값 : " << b << endl;


}
