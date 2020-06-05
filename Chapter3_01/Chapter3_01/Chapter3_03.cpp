#include <stdio.h>
#include <iostream>
#include <iomanip> //setw
#include <string> //strlen()

using namespace std;

//int main(void)
//{
//	int array[3] = { 10,20,30 };
//	int* p = NULL;
//
//	//배열의 0번째 요소의 주소
//	cout << setw(15) << array << setw(15) << array + 0 << setw(15) << &array[0] << endl;
//	//배열의 1번째 요소의 주소
//	cout << setw(15) << array+1 << setw(15)  << &array[1] << endl;
//	//배열의 2번째 요소의 주소
//	cout << setw(15) << array + 2 << setw(15) << &array[2] << endl;
//
//	cout << setw(15) << sizeof(array) << setw(15) << sizeof(array + 0) << setw(15) << sizeof(&array[0]) << endl;
//
//	//배열의 0번째 요소의 값
//	cout << setw(15) << *array << setw(15) << *(array + 0) << setw(15) << *&array[0] << endl;
//	//배열의 1번째 요소의 값
//	cout << setw(15) << *(array + 1) << setw(15) << *&array[1] << endl;
//	//배열의 2번째 요소의 값
//	cout << setw(15) << *(array + 2) << setw(15) << *&array[2] << endl;
//
//	cout << setw(15) << sizeof(*array) << setw(15) << sizeof(*(array + 0)) << setw(15) << sizeof(*&array[0]) << endl;
//
//
//	cout << endl;
//
//
//	p = array;//&array[0]; //array+0 
//
//	//배열의 0번째 요소의 주소
//	cout << setw(15) << p << setw(15) << p + 0 << setw(15) << &p[0] << endl;
//	//배열의 1번째 요소의 주소
//	cout << setw(15) << p + 1 << setw(15) << &p[1] << endl;
//	//배열의 2번째 요소의 주소
//	cout << setw(15) << p + 2 << setw(15) << &p[2] << endl;
//
//	//배열의 0번째 요소의 값
//	cout << setw(15) << *p << setw(15) << *(p + 0) << setw(15) << *&p[0] << endl;
//	//배열의 1번째 요소의 값
//	cout << setw(15) << *(p + 1) << setw(15) << *&p[1] << endl;
//	//배열의 2번째 요소의 값
//	cout << setw(15) << *(p + 2) << setw(15) << *&p[2] << endl;
//
//	return 0;
//}


int main(void)
{
	//5개의 문자열이 들어가 있는 배열 (* = 한개당 4바이트로 친다)
	const char *s[] = { "A","BB","CCC","DDDD","EEEEE" };

	printf("%d\n", sizeof(s));
	//4바이트의 포이트형이 5개 :  4*5=20

	//모든 문자열의 길이의 합계(null 문자는 제외)
	size_t total_size = 0;
	for (size_t i = 0; i < sizeof(s)/sizeof(s[0]); i++)
	{
		total_size += strlen(s[i]);
	}
	printf("%d\n", total_size);

	printf("%d\n", sizeof(s) / sizeof(s[0]));
}