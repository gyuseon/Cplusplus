#include "weightmanage.h"

void weight::print()
{
	cout << "�� �� : " << customer_irum << endl;
	cout << "�� �� : " << ((gender==1 || gender==3) ? "����":"����") << endl;
	cout << "����� Ű�� ������ : " << customer_height << ",\t" << customer_weight << endl;
		//abs = ���� ��
	cout << "����� ������ : "<<abs(customer_opt) <<"Kg"<<(customer_opt>0 ? "�ʰ�" : "�̴�") <<endl;

}