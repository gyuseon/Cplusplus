#include "1.h"

int max(int a, int b);

//void main()
//{
//	int m, n, res;
//	cout << "���� �� ���� �Է��ϼ��� : ";
//	cin >> m >> n;
//	res = max(m, n);
//	cout << "MAX : " << res << endl;
//}
//int max(int a, int b)
//{
//	if (a > b)
//		return a;
//	else
//		return b;
//}


//call by value
//void value(int a, int b)
//{
//	int temp;
//	temp = a;
//	a = b;
//	b = temp;
//	cout << " a=" << a << endl;
//	cout << " b=" << b << endl;
//}
//
//void main()
//{
//	int n1, n2;
//	n1 = 10;
//	n2 = 20;
//	value(n1, n2);
//	cout << " n1=" << n1 << endl;
//	cout << " n2=" << n2 << endl;
//}


// //call by reference ( * :  pointer)
//void value(int *a, int *b)
//{
//	cout << " a=" << a << endl;
//	cout << " b=" << b << endl;
//	cout << " a=" << *a << endl;
//	cout << " b=" << *b << endl;
//	cout << endl;
//
//	int temp;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//	cout << " a=" << a << endl;
//	cout << " b=" << b << endl;
//	cout << " a=" << *a << endl;
//	cout << " b=" << *b << endl;
//	cout << endl;
//}
//
//void main()
//{
//	int n1, n2;
//	n1 = 10;
//	n2 = 20;
//	cout << " n1=" << &n1 << endl;
//	cout << " n2=" << &n2 << endl;
//	cout << " n1=" << n1 << endl;
//	cout << " n2=" << n2 << endl;
//	cout << endl;
//	value(&n1, &n2); //�ش� ���� �ּҸ� �Ѱ��ش� (���� �ѱ�°��� �ƴϴ�)
//	cout << " n1=" << &n1 << endl;
//	cout << " n2=" << &n2 << endl;
//	cout << " n1=" << n1 << endl;
//	cout << " n2=" << n2 << endl;
//}


////���μ�, ���μ�, return���� ��� ���� ���
//char mun; //��������
//
//void dae()
//{
//	mun = mun - 32;
//	cout << mun << endl;
//}
//
//void main()
//{
//	cout << "���ĺ��� �Է��ϼ��� : ";
//	cin >> mun;
//	dae();
//}


////���μ�,���μ��� �ְ�,return���� ���� ���
// ȣ���ϴ� ��, �������� �־����� ������ ���μ� �� argument ��� ���� ����.
// �ݸ� ȣ��޴� ��, ���� �޴� ������ parameter ��� ���� ����Ѵ�.

//char mun,alp; //��������
//
//void dae(char alp) ////���μ� alp
//{
//	alp = alp - 32;
//	cout << alp << endl;
//}
//
//void main()
//{
//	cout << "���ĺ��� �Է��ϼ��� : ";
//	cin >> mun;
//	dae(mun); ////���μ� mun
//}


//���μ�,���μ��� ����,return���� �ִ� ���
char mun, alp; //��������

char dae()
{
	mun = mun - 32;
	return mun;
}

void main()
{
	cout << "���ĺ��� �Է��ϼ��� : ";
	cin >> mun;
	alp = dae();
	cout << alp << endl;
}


