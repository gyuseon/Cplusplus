#include "헤더.h"

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
//};
//
//void people::calc_pay()
//{
//	pay = pay - (pay*0.033);
//}
//
//int main()
//{
//	people p = { "홍길동",30,"회사원",3000000 };
//	//c에서 struct::p.irum p.age p.job
//	p.calc_pay();
//	
//	cout << "성명 : " << p.irum << endl;
//	cout << "나이 : " << p.age << endl;
//	cout << "실수령액 : " << p.pay << endl;
//
//	cout << "====================================" << endl;
//
//	people p2 = { "장길산",40,"회사원",3500000 };
//	p2.calc_pay();
//	cout << "성명 : " << p2.irum << endl;
//	cout << "나이 : " << p2.age << endl;
//	cout << "실수령액 : " << p2.pay << endl;
//}

struct people
{
private:
	//구조체의 멤버변수
	string irum[20];
	int age;
	string job[20];
	int pay;
public:
	//동작정의(behavior)
	void calc_pay(string inum, int age, string job, int pay);
	void calc_pay();
};

void people::init(string irum, int age, string job, int pay)
{
	people::irum = irum;
	people::age = age;
	people::job = job;
}

void people::calc_pay()
{
	
	pay = pay - (pay*0.033);
	//people p3 = { "황규선",27,"백수",10000000 };
	cout << "ㅇㅣ름 : "<<irum <<"JOB"<<job <<"PAY" << pay<< endl;
	cout << "성명 : " << irum << endl;
	cout << "나이 : " << age << endl;
	cout << "나이 : " << job << endl;
	cout << "실수령액 : " << pay << endl;
}

int main()
{
	people p;
	people p2;
	 p.init{ "홍길동",30,"회사원",3000000 };
	 p.calc_pay();


	p2.init{ "장길산",40,"회사원",3500000 };
	p2.calc_pay();
	
}