#include "���.h"

//int arr[10][10], x = -1, y = 0, N = 0 ;
//char ox;
//
//void dal(int K, int num)
//{
//	while (1) {
//		//���߽� 0��
//		for (int P = 0; P < K; P++) {
//			N += 1;
//			x = x + num; //S�� ����ġ ����
//			arr[y][x] = N;
//		}
//		K = K - 1; //K�� 5���� 4�� ����
//		if (K > 0) {
//			//���߽� 4��
//			for (int P = 0; P < K; P++) {
//				N += 1;
//				y = y + num;
//				arr[y][x] = N; //J�� 4��
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
//		cout << "1~10������ ���� �Է��ϼ��� : ";
//		cin >> n;
//		if (n > 10)
//		{
//			cout << "�ٽ� �Է��ϼ���!" << endl;
//			continue;
//		}
//		else
//		{
//			dal(n, 1);
//			print(n);
//			cout << "��� �Ͻðڽ��ϱ�?(Y/N) : ";
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
	cout << "Ȧ���� �Է��ϼ��� : ";
	cin >> n;
	x = -1; // ��
	y = n / 2;//�� ���
	for (i = 1; i <= n * n; i++)
	{
		if (i%n == 1) //����϶�
			x = x + 1; // [x][y] -->[0][2] ����϶� ��Ģ
		else
		{
			// ���� ������ ���� ���� �� ���� ���ڴ�  �� ����,���� ����(�밢������)
			x = x - 1;
			y = y + 1;
		}
		if (x < 0) //���� �������
			x = n - 1;
		if (y > n - 1) //���� �������
			y = 0;
		tab[x][y] = i;
	}
	print();
}