#include<iostream>

using namespace std;

void main()
{
	/*int kor, eng, tot, mok;
	double avg;

	cout << "���� ���� :";
	cin >> kor;
	cout << "���� ���� : ";
	cin >> eng;
	tot = kor + eng;
	avg = tot / 2.0;
	mok = avg / 10;

	switch (mok)
	{
	case 10 :
		printf_s("����� A+�Դϴ�");
		break;
	case 9:
		printf_s("����� A�Դϴ�");
		break;
	case 8:
		printf_s("����� B�Դϴ�");
		break;
	case 7:
		printf_s("����� C�Դϴ�");
		break;
	case 6:
		printf_s("����� D�Դϴ�");
		break;
	default:
		printf_s("F����Դϴ�.");
	}*/

	int a, b;
	char op;
	cout << " �� ���� �Է��ϼ��� :";
	cin >> a >> b;
	cout << " �����ڸ� �Է��ϼ���(+,-,*,/,%)" << endl;
	cin >> op;

	switch (op)
	{
	case '+' :
		cout << "�� ���� ���� : " << a + b << endl;
		break;
	case '-':
		cout << "�� ���� ���� : " << a - b << endl;
		break;
	case '*':
		cout << "�� ���� ���� : " << a * b << endl;
		break;
	case '/':
		cout << "�� ���� ������� : " << a / b << endl;
		break;
	case '%':
		cout << "�� ���� ���� : " << a % b << endl;
		break;

	default:
		cout << "�ٽ� �Է����ּ��� " << endl;
		break;
	}
}
