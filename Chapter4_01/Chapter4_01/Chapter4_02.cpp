#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

string name[5];
int sung[5][6], cnt, k, i, j, gra;
ifstream fin("in_1.txt");
ofstream fout("out_2.txt");


//5�� �л��� 3���� �����Է¹ޱ�
void input()
{
	for (i = 0; i < 5; i++)
	{
		fin >> name[i];

		for (j = 0; j < 3; j++)
		
			fin >> sung[i][j];
		
	}
}


//������ �հ�� ���
void process()
{
	
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				
				sung[i][3] +=sung[i][j];
				//sung[i][3] = sung[i][3]+ sung[i][j];

				
			}
			sung[i][4] = sung[i][3] / 3;
		}
}

//����
void sukch()
{
	for (i = 0; i < 5; i++)
	{
		sung[i][5] = 1;
		for (j = 0; j < 5; j++)
		{
			if (sung[i][4] < sung[j][4])
			{
				sung[i][5]++;
			}
		}
	}
}

//���
void print()
{
	fout << "�̸�" <<setw(7) << "JAVA" << setw(7) << "C++" << setw(9) << "Python" << setw(6)
		<< "����" << setw(6) << "���" << setw(8) << "����" << setw(15) << "�׷���" << endl;
	//�̸� ���
	
	//���� ���

	for (i = 0; i < 5; i++)
	{
		fout << name[i] << setw(4);
		for (j = 0; j < 6; j++)
		{
			fout << setw(7) << sung[i][j];
		}
		gra=sung[i][4] / 10;
		fout << setw(7);
		for (k = 0; k < gra; k++)
		{
			fout << "�ڡڡڡڡ�";
		}
		fout << endl;
	}

}

//��¹��� �̿��ؼ� �ð�ȭ

//����
void main()
{
	input();
	process();
	sukch();
	print();
}
