#include "헤더.h"

//int arr[10][10], x = -1, y = 0, N = 0 ;
//char ox;
//
//void dal(int K, int num)
//{
//	while (1) {
//		//행중심 0행
//		for (int P = 0; P < K; P++) {
//			N += 1;
//			x = x + num; //S가 스위치 역할
//			arr[y][x] = N;
//		}
//		K = K - 1; //K가 5에서 4로 감소
//		if (K > 0) {
//			//열중심 4열
//			for (int P = 0; P < K; P++) {
//				N += 1;
//				y = y + num;
//				arr[y][x] = N; //J는 4열
//			}
//			num *= -1;
//		}
//		else
//			break;
//	}
//	
//}
//
//
//
//void clear(int n)
//{
//	x = -1, y = 0, N = 0;
//	for (int y = 0; y < n; y++) {
//		for (int x = 0; x < n; x++) {
//			arr[y][x] = 0;
//
//		}
//	}
//
//}
//void print(int n)
//{
//	for (int y = 0; y < n; y++) {
//		for (int x = 0; x <n; x++) {
//			cout << setw(3) << arr[y][x] << "";
//
//		}
//		cout << endl;
//	}
//}
//void main()
//{
//	int n;
//	while (1)
//	{
//		cout << "1~10까지의 수를 입력하세요 : ";
//		cin >> n;
//		if (n > 10)
//		{
//			cout << "다시 입력하세요!" << endl;
//			continue;
//		}
//		else
//		{
//			dal(n, 1);
//			print(n);
//			cout << "계속 하시겠습니까?(Y/N) : ";
//			cin >> ox;
//			if (ox == 'y' || ox == 'Y')
//			{
//				clear(n);
//				continue;
//			}
//			else
//				break;
//		}
//	}
//}


int tab[100][100], i, j, x, y, n;

void print()
{
	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j <n; j++) 
		{
		cout << setw(3) << tab[i][j];
		
		}
		cout << endl;
	}
}

void main()
{
	cout << "홀수를 입력하세요 : ";
	cin >> n;
	x = -1; // 행
	y = n / 2;//열 가운데
	for (i = 1; i <= n * n; i++)
	{
		if (i%n == 1) //배수일때
			x = x + 1; // [x][y] -->[0][2] 배수일때 규칙
		else
		{
			// 값이 배수라면 행을 감소 후 다음 숫자는  행 감소,열을 증가(대각선으로)
			x = x - 1;
			y = y + 1;
		}
		if (x < 0) //행을 벗어났을떄
			x = n - 1;
		if (y > n - 1) //열을 벗어났을때
			y = 0;
		tab[x][y] = i;
	}
	print();
}