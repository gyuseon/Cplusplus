#include "���.h"

//struct people
//{
//
//	//����ü�� �������
//	char irum[20];
//	int age;
//	char job[20];
//	int pay;
//	
//	//��������(behavior)
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
//	people p = { "ȫ�浿",30,"ȸ���",3000000 };
//	//c���� struct::p.irum p.age p.job
//	p.calc_pay();
//	
//	cout << "���� : " << p.irum << endl;
//	cout << "���� : " << p.age << endl;
//	cout << "�Ǽ��ɾ� : " << p.pay << endl;
//
//	cout << "====================================" << endl;
//
//	people p2 = { "����",40,"ȸ���",3500000 };
//	p2.calc_pay();
//	cout << "���� : " << p2.irum << endl;
//	cout << "���� : " << p2.age << endl;
//	cout << "�Ǽ��ɾ� : " << p2.pay << endl;
//}

struct people
{
private:
	//����ü�� �������
	string irum[20];
	int age;
	string job[20];
	int pay;
public:
	//��������(behavior)
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
	//people p3 = { "Ȳ�Լ�",27,"���",10000000 };
	cout << "���Ӹ� : "<<irum <<"JOB"<<job <<"PAY" << pay<< endl;
	cout << "���� : " << irum << endl;
	cout << "���� : " << age << endl;
	cout << "���� : " << job << endl;
	cout << "�Ǽ��ɾ� : " << pay << endl;
}

int main()
{
	people p;
	people p2;
	 p.init{ "ȫ�浿",30,"ȸ���",3000000 };
	 p.calc_pay();


	p2.init{ "����",40,"ȸ���",3500000 };
	p2.calc_pay();
	
}