#include < iostream>

using namespace std;

void main()
{
	/*int a, b;
	cout << "ù���� ���ڸ� �Է��ϼ��� : ";
	cin >> a;
	cout << "�ι��� ���ڸ� �Է��ϼ��� : ";
	cin >> b;
	cout << "a= " << a << endl << "b =" << b << endl;
	cout << "Large number = ";
	a > b ? cout << a << "��(��) �� ũ��" << endl
		: cout << b << "��(��) �� ũ�� " << endl;*/

	//int i, j,k, max, min;
	//cout << "���� 3���� �Է��ϼ��� : ";
	//cin >> i >> j >> k;
	//max = /*(i > j) ? ((i > k) ? i : k) : ((j > k) ? j:k) ;*/
	//	i > (j > k ? max = j : max = k) ? max = i : max;
	//min = /*(i < j) ? ((i < k) ? i : k) : ((j < k) ? j : k);*/
	//i > (j > k ? min = k : min = j) ?   min : min = i;
	//cout << "max = " << max << endl;
	//cout << "min = " << min << endl;

	int n, n1, n2, n3, n4, n5;
	cout << "�ټ��ڸ� ���� �Է� �ϼ��� : ";
	cin >> n;
	cout << n << "��" << endl;
	n1 = n / 10000;
	n = n - n1 * 10000;
	n2 = n / 5000;
	n = n - n2 * 5000;
	n3 = n / 1000;
	n = n - n3 * 1000;
	n4 = n / 500;
	n = n - n4 * 500;
	n5 = n / 100;
	n = n - n5 * 100;

	cout << "����¥�� = " << n1 << endl;
	cout << "��õ��¥�� = " << n2 << endl;
	cout << "õ��¥�� = " << n3 << endl;
	cout << "�����¥�� = " << n4 << endl;
	cout << "���¥�� = " << n5 << endl;
	

}