#include "1.h"



//void main()
//{
//	//소수 판별법
//	/*int n, flag = 0, i;
//	cout << "숫자를 입력하세요 :";
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
//		cout << "소수 입니다" << endl;
//	else
//		cout << "소수가 아닙니다" << endl;*/
//
//}

//void main()
//{
	////제곱근을 이용한 소수 판별법 : sprt(),#include<math.h>
	//int i, j = 2;
	//cout << "숫자를 입력하세요 : ";
	//cin >> i;
	////for 문으로 감싸는데 1~100 수 중에 가장 큰 소수를 구하기
	////첫 번째 for문에서는 3~100까지 돌려
	////두 번째 for문에서는 소수를 구하는 for문을 돌린다.
	//if (j <= sqrt(i))
	//{
	//	if (i%j == 0)
	//		cout << i << "는 소수가 아닙니다" << endl;
	//	else  
	//		j = j + 1;
	//	
	//}
	//else
	//	cout<<i << "는 소수 입니다" << endl;

	/*int n, flag = 0, i, sq;
	cout << "숫자를 입력하세요 :";
	cin >> n;
	sq = sqrt(n);
	cout << "분석숫자 : " << sq;
	for (i = 2; i < sq; i++) 
	{
		if ((sq%i) == 0)
		{
			flag = 1;
			break;
		}
	}
	if (flag == 0)
		cout << "은 소수 입니다" << endl;
	else
		cout << "은 소수가 아닙니다" << endl;*/

//	int P = 2; //가장 큰 소수가 저장되는 변수
//	int N = 3;
//	while (1)
//	{
//		int M = int(sqrt(double(N))); // 자바 math.sqrt(double(N))
//		//N(49)를 소수인지 판단하는 범위(i(2)~M(7))
//		for (int i = 2; i <= M; i++)
//		{
//			int R = N % i;
//			if (R == 0)
//				break;
//			if (i == M) //나누어 떨어진 수가 자기자신인지 판단
//				//소수이면 P변수방에 저장
//				P = N;
//		}
//		N++;
//		if (N > 100)
//			break;
//	}
//	printf("100까지의 소수중 가장 큰 수는 : %d\n", P);
//
//}

void main()
{
	/*int u, v ,GCD,LCM,m,n;
	cout << "두 수를 입력하세요 :";
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
	cout << "두 수를 입력하세요 :";
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
	cout << "한 문자를 입력하세요 : ";
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
			cout << "대문자를 입력하세요 : ";
			continue;

		}
	}
}