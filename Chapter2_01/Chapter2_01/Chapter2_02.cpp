#include "헤더.h"

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
//		cout << "프로그램 종료 하시려면 0을 누르세요" << endl;
//		k = _getch(); //<conio.h>
//		if (k == '0') {
//			cout << "프로그램 종료" << endl;
//			break;
//		}
//		switch (k)
//		{
//		case'1':
//			cnt = 0; // 초기화 0부터 시작할수있게
//			for (int i = 0; i < 5; i++)
//			{
//				for (int j = 0; j < 5; j++)
//					tab[i][j] = ++cnt; //++ 이면 1더하고 시작
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
//		cout << "숫자를 입력 하세요" << endl;
//		cin >> k;
//
//		if (k == '0') {
//
//			break;
//		}
//		cout << endl;
//
//		cnt = 0; // 초기화 0부터 시작할수있게
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



// 정렬
// 1.선택정렬 ( 하나하나씩 작은것은 앞에 큰것은 뒤에)

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

//1-1 입력값 후 정렬
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
//cout << "숫자를 입력하세요 : " << endl;
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


//2. 버블정렬 (뒤에서부터 정렬)

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
//	cout << "숫자를 입력하세요 : " << endl;
//	for (i = 0; i < 5; i++)
//		cin >> tab[i];

	//정민누나 생각은 이렇다
	//for (int i = 5; i > 0; i--) {
	//	for (int j = 0; j < i-1; j++) {
	//		if (tab[j] > tab[j + 1]) {
	//			// 바꿈
	//			temp = tab[j];
	//			tab[j] = tab[j+1];
	//			tab[j+1] = temp;
	//		}
	//	}
	//}

	//쌤 방법
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


//삽입정렬
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
//	for (i = 1; i < 5;i++) //2번째 값부터 정렬시작 key값 추출
//	{
//		temp = tab[i];
//		j = i - 1; //key값의 바로 앞에부터 비교
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
//		//키의 위치는 두번쨰부터 설정해야 첫번째값과 비교가 시작됨
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


//BS의 FUNCTION

//int BS(int E[], int L, int H, int K)
//{
//	int M;
//	for (;;) // true 무한루프와 동일 while(1)
//	{
//		if (L > H) // 데이터가 1또는 2개 존재
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
//			return M + 1;// 0부터 시작해서 1 더해짐
//	}
//}
//
//void main()
//{
//	int L, H, K;
//	int E[] = { 11,15,20,22,35,38,39,42,43,45,100 };
//	cout << "찾는 값 :" << 20 << "은";
//	cout<< BS(E, 0, 10, 20); //하한0 상한10 키값20 배열E
//	cout << "번쨰 있습니다,";
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
	while (L <= H) { // 만약, L>H가 되면 -99를 리턴함
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

	for (int i = 1; i < n; i++) {  // 2번째 값부터 정렬을 시작. key 값 추출
		key = tab[i]; // temp= tab[1]로 시작
		j = i - 1;  //key값의 바로 앞에서부터 비교
		while (j >= 0 && tab[j] > key) {
			tab[j + 1] = tab[j]; // 만약 j = 0이면 tab[1]에 tab[0]값을 넣어줌
			j--;             // j = -1;
			tab[j + 1] = key;   // tab[0]에 temp=key값=tab[1]을 넣어줌.
		}
	}
}



void main() {

	int tab[50];
	int num, i = 0;
	int index;

	cout << "숫자를 입력하세요 (종료는 0)" << endl;
	while (1) {
		cin >> num;
		if (num == 0)
			break;

		tab[i] = num;
		i++;
	}

	print(tab, i);

	// 정렬
	jung(tab, i);
	cout << "정렬 후" << endl;
	print(tab, i);

	// 이분 검색
	cout << "찾고자 하는 값을 입력하세요 : ";
	cin >> num;

	index = BS(tab, 0, i, num);

	if (index == -99) cout << "찾고자 하는 숫자가 없네요" << endl;
	else cout << "찾고자 하는 숫자 " << num << " 은 " << index << "번 째에 있다" << endl;
}