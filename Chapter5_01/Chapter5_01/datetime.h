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
		cout << "원숭이 띠입니다.\n";
		break;
	case 1:
		cout << "닭 띠입니다.\n";
		break;
	case 2:
		cout << "개 띠입니다.\n";
		break;
	case 3:
		cout << "돼지 띠입니다.\n";
		break;
	case 4:
		cout << "쥐 띠입니다.\n";
		break;
	case 5:
		cout << "소 띠입니다.\n";
		break;
	case 6:
		cout << "호랑이 띠입니다.\n";
		break;
	case 7:
		cout << "토끼 띠입니다.\n";
		break;
	case 8:
		cout << "용 띠입니다.\n";
		break;
	case 9:
		cout << "뱀띠입니다.\n";
		break;
	case 10:
		cout << "말 띠입니다.\n";
		break;
	case 11:
		cout << "양 띠입니다.\n";
		break;

		return any;
	}
}

inline void calc_age(int year)
{
	time_t now; //현재시간 라이브러리
	struct tm mytime;

	now = time(NULL); // 현재시간을 초단위로 바꾸기
	localtime_s(&mytime, &now);
	//now에 담긴 현재시간을 년,월...초로 변환하여 mytime에 저장

	cout << "당신의 나이는 : " << mytime.tm_year + 1900 - year + 1 << endl;
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