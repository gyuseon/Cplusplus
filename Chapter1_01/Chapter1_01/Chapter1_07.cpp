#include "1.h"



//void main()
//{
//	//�Ҽ� �Ǻ���
//	/*int n, flag = 0, i;
//	cout << "���ڸ� �Է��ϼ��� :";
//	cin >> n;
//	for(i=2;i<n;i++)
//	{ 
//		if ((n%i) == 0)
//		{
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 0)
//		cout << "�Ҽ� �Դϴ�" << endl;
//	else
//		cout << "�Ҽ��� �ƴմϴ�" << endl;*/
//
//}

//void main()
//{
	////�������� �̿��� �Ҽ� �Ǻ��� : sprt(),#include<math.h>
	//int i, j = 2;
	//cout << "���ڸ� �Է��ϼ��� : ";
	//cin >> i;
	////for ������ ���δµ� 1~100 �� �߿� ���� ū �Ҽ��� ���ϱ�
	////ù ��° for�������� 3~100���� ����
	////�� ��° for�������� �Ҽ��� ���ϴ� for���� ������.
	//if (j <= sqrt(i))
	//{
	//	if (i%j == 0)
	//		cout << i << "�� �Ҽ��� �ƴմϴ�" << endl;
	//	else  
	//		j = j + 1;
	//	
	//}
	//else
	//	cout<<i << "�� �Ҽ� �Դϴ�" << endl;

	/*int n, flag = 0, i, sq;
	cout << "���ڸ� �Է��ϼ��� :";
	cin >> n;
	sq = sqrt(n);
	cout << "�м����� : " << sq;
	for (i = 2; i < sq; i++) 
	{
		if ((sq%i) == 0)
		{
			flag = 1;
			break;
		}
	}
	if (flag == 0)
		cout << "�� �Ҽ� �Դϴ�" << endl;
	else
		cout << "�� �Ҽ��� �ƴմϴ�" << endl;*/

//	int P = 2; //���� ū �Ҽ��� ����Ǵ� ����
//	int N = 3;
//	while (1)
//	{
//		int M = int(sqrt(double(N))); // �ڹ� math.sqrt(double(N))
//		//N(49)�� �Ҽ����� �Ǵ��ϴ� ����(i(2)~M(7))
//		for (int i = 2; i <= M; i++)
//		{
//			int R = N % i;
//			if (R == 0)
//				break;
//			if (i == M) //������ ������ ���� �ڱ��ڽ����� �Ǵ�
//				//�Ҽ��̸� P�����濡 ����
//				P = N;
//		}
//		N++;
//		if (N > 100)
//			break;
//	}
//	printf("100������ �Ҽ��� ���� ū ���� : %d\n", P);
//
//}

void main()
{
	/*int u, v ,GCD,LCM,m,n;
	cout << "�� ���� �Է��ϼ��� :";
	cin >> u >> v;
	m = u;
	n = v;
	while (m != n) {

		if (m > n)
			m = m - n;
		else
			n = n - m;
	}
	GCD = m;
	LCM = (u*v) / GCD;
	cout << "GCD" << setw(5) << GCD << endl;
	cout << "LCM" << setw(5) << LCM << endl;*/

	/*int u, v, GCD, LCM, s, l,na;
	cout << "�� ���� �Է��ϼ��� :";
	cin >> u >> v;
	if (u > v) {
		s = v; l= u;
	}
	else
	{
		s = u; l = v;
	}
	while (s != 0)
	{
		na = l % s; l = s; s = na;

		GCD = l;
		LCM = (u*v) / GCD;
		cout << "GCD" << setw(5) << GCD << endl;
		cout << "LCM" << setw(5) << LCM << endl;
	}*/
	
	char mun, alp;
	int i;
	cout << "�� ���ڸ� �Է��ϼ��� : ";
	while (1)
	{
		cin >> mun;
		if (mun >= 'A' && mun <= 'Z')
		{
			for (i = 1; i <= 26; i++)
			{
				alp = mun++;
				cout << setw(2) << alp;
				if (mun > 'Z')
					mun = mun - 26;
			}
			cout << endl;
			break;
		}
		else
		{
			cout << "�빮�ڸ� �Է��ϼ��� : ";
			continue;

		}
	}
}