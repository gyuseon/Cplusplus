#include<iostream>
#include<string>
using namespace std;

//struct student
//{
//char classnumber[20];
//char name[20];
//int grade;
//double avg;
//};
//
//int main()
//{
//	student st1 = { "7��", "ȫ�浿",95 };
//	student st2 = { "3��", "����",83 };
//
//	cout << "st1�� ���� : class -" << st1.classnumber << " name : " << st1.name << "grade : " << st1.grade << endl;
//	cout << "st2�� ���� : class -" << st2.classnumber << " name : " << st2.name << "grade : " << st2.grade << endl;
//	cout << " �� �� : " << (st1.grade + st2.grade) / 2;
//	cout << endl;
//}

struct student
	//����ü ��� ���� ����
{
	char classnumber[20];
	char name[20];
	int grade;
	double avg;
	void stu_avg(int a, int b);

};

void student::stu_avg(int a, int b) //people ����ü �Ҽ�
{
	int c = (a + b) / 2;
	cout << "��� : " << c << endl;
}

int main()
{
	student st1 = { "7��", "ȫ�浿",95 };
	student st2 = { "3��", "����",83 };

	cout << "st1�� ���� : class -" << st1.classnumber << " name : " << st1.name << "grade : " << st1.grade << endl;
	cout << "st2�� ���� : class -" << st2.classnumber << " name : " << st2.name << "grade : " << st2.grade << endl;
	cout << " �� �� : " << (st1.grade + st2.grade) / 2;
	st1.stu_avg(st1.grade, st2.grade);
	cout << endl;
}