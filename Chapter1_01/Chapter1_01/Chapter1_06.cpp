#include<iostream>
#include<iomanip>

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

	//int a, b;
	//char op;
	//cout << " �� ���� �Է��ϼ��� :";
	//cin >> a >> b;
	//cout << " �����ڸ� �Է��ϼ���(+,-,*,/,%)" << endl;
	//cin >> op;
	
	//switch (op)
	//{
	//case '+' :
	//	cout << "�� ���� ���� : " << a + b << endl;
	//	break;
	//case '-':
	//	cout << "�� ���� ���� : " << a - b << endl;
	//	break;
	//case '*':
	//	cout << "�� ���� ���� : " << a * b << endl;
	//	break;
	//case '/':
	//	cout << "�� ���� ������� : " << a / b << endl;
	//	break;
	//case '%':
	//	cout << "�� ���� ���� : " << a % b << endl;
	//	break;
	//default:
	//	cout << "�ٽ� �Է����ּ��� " << endl;
	//	break;
	//}

	/*int a;
	cout << "������ �Է��ϼ��� : ";
	cin >> a;

	if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0) {
		printf_s("�����Դϴ�");
	}
	else 
	{
		printf_s("����Դϴ�"); }
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
	cout << "���� for ��" << endl;
	for (a = 1; a <= 2; a++)
		for (b = 1; b <= 3; b++)
			cout << "a=" << a << setw(5) << "b= " << b << endl;
	cout << "��!!!";*/

	/*for (int a = 1; a < 10; a++)
	for (int b = 1; b < 10; b++)
		cout<<a<< '*' << b <<'=' << a * b << endl;*/

	/*int dan,a;
	cout << "���ϴ� ���� �Է��ϼ��� : ";
	cin >> dan;
	
	for(int a=1 ;a<10;a++)
			cout << dan << '*' << a << '=' << dan * a << endl;*/

	//char mun;
	//while (1)
	//{
	//	cout << "���ڸ� �Է��ϼ��� :";
	//	cin >> mun;
	//	if (mun >= 'A' && mun <= 'Z') //65~92
	//	{
	//		cout << "�����Է��Դϴ� " << endl;
	//		break;
	//	}
	//	else
	//	{
	//		cout << "�߸� �Է��ϼ̽��ϴ�. �빮�ڸ� �Է��ϼ���" << endl;
	//		continue;
	//	}
	//}
	
	//int n;
	//while (1)
	//{
	//	cout << "���ڸ� �Է��ϼ��� :";
	//	cin >> n ;

	//	if (n == EOF) //-1
	//	{
	//		cout << "����˴ϴ�" << endl;
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
	cout<<"¦���� �� : " << asum << endl;
	cout<<"Ȧ���� �� : " << bsum << endl ;*/

	int n = 0, sum = 0,sw=1;
	do
	{
		sum = sum + sw * n;
			n = n + 1;
			sw = -sw;
	} while (n<100);
	cout <<"�� ���� : "<< sum << endl;


}
