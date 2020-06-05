// chapter6_01.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include<iostream>
#include<string>
using namespace std;

//struct people
//{
//
//	//구조체의 멤버변수
//	char irum[20];
//	int age;
//	char job[20];
//	int pay;
//
//	//동작정의(behavior)
//	void calc_pay();
//
//};
//void people::calc_pay()
//{
//	pay = pay - (pay*0.033);
//}
//
//int main()
//{
//	people p = { "홍길동",30,"회사원",3000000 };
//	//c에서 struct::p.irum  p.age p.job
//	people p2 = { "장길산", 40, "회사원", 3500000 };//객체가 구조체 공유 
//	p.calc_pay();
//	p2.calc_pay();
//	cout << "성명: " << p.irum << endl;
//	cout << "나이: " << p.age << endl;
//	cout << "실수령액 : " << p.pay << endl;
//	cout << "----------------------" << endl;
//	cout << "성명: " << p2.irum << endl;
//	cout << "나이: " << p2.age << endl;
//	cout << "실수령액 : " << p2.pay << endl;
//}
//
//

struct people
{
private:
	//구조체의 멤버변수
	string irum;
	int age;
	string job;
	int pay;
public:
	//동작정의(behavior)
	void init(string irum, int age, string job, int pay);
	void calc_pay();

};
void people::init(string irum, int age, string job, int pay)
{
	people::irum = irum;
	people::age = age;
	people::job = job;
	people::pay = pay;

}

void people::calc_pay()
{
	pay = pay - (pay*0.033);
	cout << "성  명 : " << irum << endl;
	cout << "나  이 : " << age << endl;
	cout << "직  무 : " << job << endl;
	cout << "급  여 : " << pay << endl;//멤버변수 호출가능
	cout << "=========================" << endl;

}

int main()
{
	people p;
	people p2;
	p.init("홍길동", 30, "사원", 3000000);
	p2.init("장길산", 27, "사원", 2800000);
	p.calc_pay();
	p2.calc_pay();

}