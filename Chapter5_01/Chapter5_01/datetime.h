#pragma once

#include <stdio.h>
#include <iostream>
#include <time.h>
#include <ctime>

using namespace std;

inline int calc_zodiac(int birthday)
{
	int any = birthday % 12;
	switch (any)
	{
	case 0:
		cout << "������ ���Դϴ�.\n";
		break;
	case 1:
		cout << "�� ���Դϴ�.\n";
		break;
	case 2:
		cout << "�� ���Դϴ�.\n";
		break;
	case 3:
		cout << "���� ���Դϴ�.\n";
		break;
	case 4:
		cout << "�� ���Դϴ�.\n";
		break;
	case 5:
		cout << "�� ���Դϴ�.\n";
		break;
	case 6:
		cout << "ȣ���� ���Դϴ�.\n";
		break;
	case 7:
		cout << "�䳢 ���Դϴ�.\n";
		break;
	case 8:
		cout << "�� ���Դϴ�.\n";
		break;
	case 9:
		cout << "����Դϴ�.\n";
		break;
	case 10:
		cout << "�� ���Դϴ�.\n";
		break;
	case 11:
		cout << "�� ���Դϴ�.\n";
		break;

		return any;
	}
}

inline void calc_age(int year)
{
	time_t now; //����ð� ���̺귯��
	struct tm mytime;

	now = time(NULL); // ����ð��� �ʴ����� �ٲٱ�
	localtime_s(&mytime, &now);
	//now�� ��� ����ð��� ��,��...�ʷ� ��ȯ�Ͽ� mytime�� ����

	cout << "����� ���̴� : " << mytime.tm_year + 1900 - year + 1 << endl;
}

inline void calc_day(int any)
{
	switch (any)
	{
	case 0:std:: cout << "Happy day!\n"; break;
	case 1:std::cout << "Happy day!\n"; break;
	case 2:std::cout << "Happy day!\n"; break;
	case 3:std::cout << "Happy day!\n"; break;
	case 4:std::cout << "Happy day!\n"; break;
	case 5:std::cout << "Happy day!\n"; break;
	case 6:std::cout << "Happy day!\n"; break;
	case 7:std::cout << "Happy day!\n"; break;
	case 8:std::cout << "Happy day!\n"; break;
	case 9:std::cout << "Happy day!\n"; break;
	case 10:std::cout << "Happy day!\n"; break;
	case 11:std::cout << "Happy day!\n"; break;
	}

}