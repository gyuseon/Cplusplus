#include<iostream>

using namespace std;

void main()
{
	/*int kor, eng, tot, mok;
	double avg;

	cout << "국어 점수 :";
	cin >> kor;
	cout << "영어 점수 : ";
	cin >> eng;
	tot = kor + eng;
	avg = tot / 2.0;
	mok = avg / 10;

	switch (mok)
	{
	case 10 :
		printf_s("등급은 A+입니다");
		break;
	case 9:
		printf_s("등급은 A입니다");
		break;
	case 8:
		printf_s("등급은 B입니다");
		break;
	case 7:
		printf_s("등급은 C입니다");
		break;
	case 6:
		printf_s("등급은 D입니다");
		break;
	default:
		printf_s("F등급입니다.");
	}*/

	int a, b;
	char op;
	cout << " 두 수를 입력하세요 :";
	cin >> a >> b;
	cout << " 연산자를 입력하세요(+,-,*,/,%)" << endl;
	cin >> op;

	switch (op)
	{
	case '+' :
		cout << "두 수의 합은 : " << a + b << endl;
		break;
	case '-':
		cout << "두 수의 차는 : " << a - b << endl;
		break;
	case '*':
		cout << "두 수의 곱은 : " << a * b << endl;
		break;
	case '/':
		cout << "두 수의 나누기는 : " << a / b << endl;
		break;
	case '%':
		cout << "두 수의 몫은 : " << a % b << endl;
		break;

	default:
		cout << "다시 입력해주세요 " << endl;
		break;
	}
}
