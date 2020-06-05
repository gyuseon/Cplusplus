#include<iostream>
#include<iomanip>

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

	//int a, b;
	//char op;
	//cout << " 두 수를 입력하세요 :";
	//cin >> a >> b;
	//cout << " 연산자를 입력하세요(+,-,*,/,%)" << endl;
	//cin >> op;
	
	//switch (op)
	//{
	//case '+' :
	//	cout << "두 수의 합은 : " << a + b << endl;
	//	break;
	//case '-':
	//	cout << "두 수의 차는 : " << a - b << endl;
	//	break;
	//case '*':
	//	cout << "두 수의 곱은 : " << a * b << endl;
	//	break;
	//case '/':
	//	cout << "두 수의 나누기는 : " << a / b << endl;
	//	break;
	//case '%':
	//	cout << "두 수의 몫은 : " << a % b << endl;
	//	break;
	//default:
	//	cout << "다시 입력해주세요 " << endl;
	//	break;
	//}

	/*int a;
	cout << "연도를 입력하세요 : ";
	cin >> a;

	if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0) {
		printf_s("윤년입니다");
	}
	else 
	{
		printf_s("평년입니다"); }
*/

	/*int han;
	han = 1;
	while (han < 5)
	{
		cout << "Good" << endl;
		han++;

	}*/

	/*int i,sum = 0;
	i = 0;
	while (i < 100)
	{
		i=i+1;
		sum = sum + i;
		cout << sum << endl;
	}*/

	/*int i, sum = 0;
	i = 1;
	do
	{
		sum += i;
		i++;
	} while (i <= 100);
	cout << "do~while = :" << sum << endl;*/

	/*int i, sum = 0;
	i = 1;
	for (i = 1; i <= 100; i++)
		sum += i;
	cout << "for : " << sum << endl;*/

	/*int a, b;
	cout << "다중 for 문" << endl;
	for (a = 1; a <= 2; a++)
		for (b = 1; b <= 3; b++)
			cout << "a=" << a << setw(5) << "b= " << b << endl;
	cout << "끝!!!";*/

	/*for (int a = 1; a < 10; a++)
	for (int b = 1; b < 10; b++)
		cout<<a<< '*' << b <<'=' << a * b << endl;*/

	/*int dan,a;
	cout << "원하는 단을 입력하세요 : ";
	cin >> dan;
	
	for(int a=1 ;a<10;a++)
			cout << dan << '*' << a << '=' << dan * a << endl;*/

	//char mun;
	//while (1)
	//{
	//	cout << "문자를 입력하세요 :";
	//	cin >> mun;
	//	if (mun >= 'A' && mun <= 'Z') //65~92
	//	{
	//		cout << "정상입력입니다 " << endl;
	//		break;
	//	}
	//	else
	//	{
	//		cout << "잘못 입력하셨습니다. 대문자를 입력하세요" << endl;
	//		continue;
	//	}
	//}
	
	//int n;
	//while (1)
	//{
	//	cout << "숫자를 입력하세요 :";
	//	cin >> n ;

	//	if (n == EOF) //-1
	//	{
	//		cout << "종료됩니다" << endl;
	//		break;
	//	}
	//	else
	//		continue;
	//}

	/*for (int b = 1; b < 10; b++) {
		for (int a = 1; a < 10; a++)
		{
			cout << a << '*' << b << '='<< a * b << "\t";
		}
		cout << endl;
	}*/

	/*int i = 0,asum=0,bsum=0,sw=0;
	do
	{
		i = i + 1;
		
		if (sw ==0)
		{
			asum = asum + i;
			sw = 1;
		}
		else {
			bsum = bsum + i;
			sw = 0;
		}
	} while (i<100);
	cout<<"짝수의 합 : " << asum << endl;
	cout<<"홀수의 합 : " << bsum << endl ;*/

	int n = 0, sum = 0,sw=1;
	do
	{
		sum = sum + sw * n;
			n = n + 1;
			sw = -sw;
	} while (n<100);
	cout <<"총 합은 : "<< sum << endl;


}
