#include "1.h"

int a; //��������

//void add(int i)
//{
//	if (i >= 10)
//		return;
//	i++;
//	cout << "i ��" << a << endl;
//	a++;
//	cout <<"a ��"<< a << endl;
//	add(i); //����Լ� 
//
//}
//
//int main()
//{
//	add(0);
//	cout << "res(���� �����) :" << a << endl;
//}


//// if ���
//void countNum_if(int num)
//{
//	if (num == 1)
//	{
//		cout << "Num : " << num << endl;
//		return;
//	}
//	else
//		cout << "Num : " << num << endl;
//		countNum(num-1);
//}
//
//int main()
//{
//	countNum(5);
//	return 0;
//}

////for���
//void countNum_for(int num)
//{
//	for (int i=num; i > 0; i--)
//	{
//		cout << "Num : " << i << endl;
//		
//	}
//	
//}
//
//int main()
//{
//	countNum_for(5);
//	return 0;
//}


////while���
//void countNum_while(int num)
//{
//	while (num > 0)
//	{
//		cout << "Num : " << num << endl;
//		num--;
//	}
//
//}
//
//int main()
//{
//	countNum_while(5);
//	return 0;
//}

//void main()
//{
//	int n = 1;
//	long long f = 1;
//	long long s = 0;
//
//
//	if (n < 20){
//		cout << s << endl;
//		}
//	else {
//		n++;
//		f = f * n;
//		s = s + f;
//
//		cout << f << endl;
//		}
//			
//			cout << s << endl;
//}


//���丮�� �˰���
//void main()
//{
//	int n = 1;
//	long long f = 1;
//	long long s = 0;
//	while (n < 20) {
//		n++;
//		f = f * n;
//		s = s + f;
//
//		cout << n << "!: " << f << endl;
//	}
//	cout<< "1���� 20������ ���丮�� �� ��:"<< s << endl;
//}


//���丮�� ����Լ�
int n, i;
long long result, dap;
int fact(int x)
{
	if (x == 1)
		return(1);
	else
		dap = x * fact(x - 1);
	return(dap);
}

void main()
{
	cout << "���ڸ� �Է��ϼ��� : ";
	cin >> n;
	result = fact(n);
	cout << n << "!=";
	for (i = n; i > 1; i--)
		cout << i << "i* ";
	cout << i << "=" <<result << endl;
}