#include "1.h"

int a; //전역변수

//void add(int i)
//{
//	if (i >= 10)
//		return;
//	i++;
//	cout << "i 값" << a << endl;
//	a++;
//	cout <<"a 값"<< a << endl;
//	add(i); //재귀함수 
//
//}
//
//int main()
//{
//	add(0);
//	cout << "res(최종 결과값) :" << a << endl;
//}


//// if 제어문
//void countNum_if(int num)
//{
//	if (num == 1)
//	{
//		cout << "Num : " << num << endl;
//		return;
//	}
//	else
//		cout << "Num : " << num << endl;
//		countNum(num-1);
//}
//
//int main()
//{
//	countNum(5);
//	return 0;
//}

////for제어문
//void countNum_for(int num)
//{
//	for (int i=num; i > 0; i--)
//	{
//		cout << "Num : " << i << endl;
//		
//	}
//	
//}
//
//int main()
//{
//	countNum_for(5);
//	return 0;
//}


////while제어문
//void countNum_while(int num)
//{
//	while (num > 0)
//	{
//		cout << "Num : " << num << endl;
//		num--;
//	}
//
//}
//
//int main()
//{
//	countNum_while(5);
//	return 0;
//}

//void main()
//{
//	int n = 1;
//	long long f = 1;
//	long long s = 0;
//
//
//	if (n < 20){
//		cout << s << endl;
//		}
//	else {
//		n++;
//		f = f * n;
//		s = s + f;
//
//		cout << f << endl;
//		}
//			
//			cout << s << endl;
//}


//팩토리얼 알고리즘
//void main()
//{
//	int n = 1;
//	long long f = 1;
//	long long s = 0;
//	while (n < 20) {
//		n++;
//		f = f * n;
//		s = s + f;
//
//		cout << n << "!: " << f << endl;
//	}
//	cout<< "1부터 20까지의 팩토리얼 총 합:"<< s << endl;
//}


//팩토리얼 재귀함수
int n, i;
long long result, dap;
int fact(int x)
{
	if (x == 1)
		return(1);
	else
		dap = x * fact(x - 1);
	return(dap);
}

void main()
{
	cout << "숫자를 입력하세요 : ";
	cin >> n;
	result = fact(n);
	cout << n << "!=";
	for (i = n; i > 1; i--)
		cout << i << "i* ";
	cout << i << "=" <<result << endl;
}