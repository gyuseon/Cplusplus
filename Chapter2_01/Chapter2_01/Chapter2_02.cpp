#include "���.h"

//void print(int temp[5][5])
//{
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//			cout << setw(3)<<temp[i][j];
//	cout << endl;
//	}
//	cout << endl;
//}
//
//
//
//void main()
//{
//	int k,cnt, tab[5][5];
//	while (1)
//	{
//		cout << "The four type of matrix <1> <2> <3> <4>" << endl;
//		cout << "���α׷� ���� �Ͻ÷��� 0�� ��������" << endl;
//		k = _getch(); //<conio.h>
//		if (k == '0') {
//			cout << "���α׷� ����" << endl;
//			break;
//		}
//		switch (k)
//		{
//		case'1':
//			cnt = 0; // �ʱ�ȭ 0���� �����Ҽ��ְ�
//			for (int i = 0; i < 5; i++)
//			{
//				for (int j = 0; j < 5; j++)
//					tab[i][j] = ++cnt; //++ �̸� 1���ϰ� ����
//			}
//			print(tab);
//			break;
//
//		case '2':
//			cnt = 0;
//			for (int j = 4; j >= 0; j--)
//			{
//				for (int i = 0; i < 5; i++)
//					tab[i][j] = ++cnt;
//			}
//			print(tab);
//			break;
//
//		case '3':
//			cnt = 0;
//			for (int i = 4; i >= 0; i--)
//			{
//				for (int j = 0; j < 5; j++)
//					tab[i][j] = ++cnt;
//			}
//			print(tab);
//			break;
//		case '4':
//			cnt = 0;
//			for (int j = 0; j<5; j++)
//			{
//				for (int i = 4; i>=0; i--)
//					tab[i][j] = ++cnt;
//			}
//			print(tab);
//			break;
//	}
//}
//	
//}


//void print(int temp[5][5])
//{
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//			cout << setw(3) << temp[i][j];
//		cout << endl;
//	}
//	cout << endl;
//}
//
//
//void main()
//{
//	int cnt=0, tab[5][5];
//
//	for (int i = 0; i < 5; i++)
//	{
//		if (i % 2 == 0) {
//			for (int j = 0; j < 5; j++)
//			tab[i][j] = ++cnt;
//		}
//		else {
//			for (int j = 4; j >= 0; j--)
//			tab[i][j] = ++cnt;
//		}
//	}
//	print(tab);
//	
//}



//int k, cnt, tab[100][100];
//
//void print()
//{
//	for (int i = 0; i < k; i++)
//	{
//		for (int j = 0; j < k; j++)
//			cout << setw(3)<<tab[i][j];
//	cout << endl;
//	}
//	cout << endl;
//}
//
//
//
//void main()
//{
//	
//	while (1)
//	{
//
//		cout << "���ڸ� �Է� �ϼ���" << endl;
//		cin >> k;
//
//		if (k == '0') {
//
//			break;
//		}
//		cout << endl;
//
//		cnt = 0; // �ʱ�ȭ 0���� �����Ҽ��ְ�
//		for (int i = 0; i < k; i++)
//		{
//			if (i % 2 == 0) {
//				for (int j = 0; j < k; j++)
//				tab[i][j] = ++cnt;
//			}
//			else {
//				for (int j = k-1; j >= 0; j--)
//				tab[i][j] = ++cnt;
//			}
//		}
//		print();
//		break;
//
//
//	}
//	
//}



// ����
// 1.�������� ( �ϳ��ϳ��� �������� �տ� ū���� �ڿ�)

//int i, j, temp;
//int tab[5] = { 9,5,10,3,2 };
//
//void print()
//{
//	for (i = 0; i < 5; i++)
//		cout << setw(5) << tab[i];
//	cout << endl;
//}
//void main()
//{
//	for (i = 0; i < 5 - 1; i++)
//	{
//		for (j = i + 1; j < 5; j++)
//		{
//			if (tab[i] >= tab[j])
//			{
//				temp = tab[i];
//				tab[i] = tab[j];
//				tab[j] = temp;
//			}
//		}
//	}
//	print();
//}

//1-1 �Է°� �� ����
//int i, j, temp,cnt;
//int tab[5];
//
//void print()
//{
//	for (i = 0; i < 5; i++)
//		cout << setw(5) << tab[i];
//	cout << endl;
//}
//void main()
//{
//cout << "���ڸ� �Է��ϼ��� : " << endl;
//for (i = 0; i < 5; i++)
//	cin >> tab[i];
//
//	for (i = 0; i < 5 - 1; i++)
//	{
//		for (j = i + 1; j < 5; j++)
//		{
//		
//			if (tab[i] >= tab[j])
//			{
//				temp = tab[i];
//				tab[i] = tab[j];
//				tab[j] = temp;
//			}
//		}
//	}
//	print();
//}


//2. �������� (�ڿ������� ����)

//int i, j, temp;
//int tab[5];
//
//void print()
//{
//	for (i = 0; i < 5; i++)
//		cout << setw(5) << tab[i];
//	cout << endl;
//}
//void main()
//{
//	cout << "���ڸ� �Է��ϼ��� : " << endl;
//	for (i = 0; i < 5; i++)
//		cin >> tab[i];

	//���δ��� ������ �̷���
	//for (int i = 5; i > 0; i--) {
	//	for (int j = 0; j < i-1; j++) {
	//		if (tab[j] > tab[j + 1]) {
	//			// �ٲ�
	//			temp = tab[j];
	//			tab[j] = tab[j+1];
	//			tab[j+1] = temp;
	//		}
	//	}
	//}

	//�� ���
//	for (i = 0; i < 5 - 1; i++)
//	{
//		for (j = 0; j < 5-1-i; j++)
//		{		
//			if (tab[j] >= tab[j+1])
//			{
//				temp = tab[j];
//				tab[j] = tab[j+1];
//				tab[j+1] = temp;
//			}
//		}
//	}
//
//	print();
//}


//��������
//int i, j, temp;
//int tab[] = { 1,8,10,4,5 };
//
//void print()
//{
//	for (i = 0; i < 5; i++)
//		cout << setw(5) << tab[i];
//	cout << endl;
//}
//void main()
//{
//	for (i = 1; i < 5;i++) //2��° ������ ���Ľ��� key�� ����
//	{
//		temp = tab[i];
//		j = i - 1; //key���� �ٷ� �տ����� ��
//		while (j >= 0 && tab[j] > temp)
//		{
//			tab[j + 1] = tab[j];
//				j--;
//			tab[j + 1] = temp;
//		}
//	}
//	print();
//}


//void main()
//{
//	int E[5] = { 95,75,80,100,50 };
//	int i;
//	int j, key;
//	for (i = 1; i < 5; i++)
//	{
//		//Ű�� ��ġ�� �ι������� �����ؾ� ù��°���� �񱳰� ���۵�
//		key = E[i];
//		for (j = i - 1; j >= 0; j--)
//		{
//			if (E[j] < key)
//				break;
//			E[j + 1] = E[j];
//		}
//		E[j + 1] = key;
//	}
//	for (i = 0; i < 5; i++)
//				cout << setw(5) << E[i];
//			cout << endl;
//	}


//BS�� FUNCTION

//int BS(int E[], int L, int H, int K)
//{
//	int M;
//	for (;;) // true ���ѷ����� ���� while(1)
//	{
//		if (L > H) // �����Ͱ� 1�Ǵ� 2�� ����
//		{
//			return -99;
//		}
//		M = (L + H) / 2;
//		if (E[M] > K)
//		{
//			H = M - 1;
//			continue;
//		}
//		else
//			if (E[M] < K)
//		{
//			H = M + 1;
//			continue;
//		}
//		else
//			return M + 1;// 0���� �����ؼ� 1 ������
//	}
//}
//
//void main()
//{
//	int L, H, K;
//	int E[] = { 11,15,20,22,35,38,39,42,43,45,100 };
//	cout << "ã�� �� :" << 20 << "��";
//	cout<< BS(E, 0, 10, 20); //����0 ����10 Ű��20 �迭E
//	cout << "���� �ֽ��ϴ�,";
//}


void print(int tab[], int n)
{
	for (int i = 0; i < n; i++) {
		cout << setw(5) << tab[i];
	}
	cout << endl;
}

int BS(int E[], int L, int H, int k) {
	int M;
	while (L <= H) { // ����, L>H�� �Ǹ� -99�� ������
		M = (L + H) / 2;
		if (E[M] > k) {
			H = M - 1;
		}
		else if (E[M] < k) {
			L = M + 1;
		}
		else if (E[M] == k) {
			return M + 1;
		}
	}

	return -99;
}
void jung(int tab[], int n) {
	int key, j;

	for (int i = 1; i < n; i++) {  // 2��° ������ ������ ����. key �� ����
		key = tab[i]; // temp= tab[1]�� ����
		j = i - 1;  //key���� �ٷ� �տ������� ��
		while (j >= 0 && tab[j] > key) {
			tab[j + 1] = tab[j]; // ���� j = 0�̸� tab[1]�� tab[0]���� �־���
			j--;             // j = -1;
			tab[j + 1] = key;   // tab[0]�� temp=key��=tab[1]�� �־���.
		}
	}
}



void main() {

	int tab[50];
	int num, i = 0;
	int index;

	cout << "���ڸ� �Է��ϼ��� (����� 0)" << endl;
	while (1) {
		cin >> num;
		if (num == 0)
			break;

		tab[i] = num;
		i++;
	}

	print(tab, i);

	// ����
	jung(tab, i);
	cout << "���� ��" << endl;
	print(tab, i);

	// �̺� �˻�
	cout << "ã���� �ϴ� ���� �Է��ϼ��� : ";
	cin >> num;

	index = BS(tab, 0, i, num);

	if (index == -99) cout << "ã���� �ϴ� ���ڰ� ���׿�" << endl;
	else cout << "ã���� �ϴ� ���� " << num << " �� " << index << "�� °�� �ִ�" << endl;
}