
#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, ".1251");
	system("chcp 1251");
	double H, R, vCyl, vCon;							//���������� ������
	do {
		cout << "������ ����� ������: "; cin >> R;	//�������� R
		cout << "������ ������: "; cin >> H;			//�������� H
	} while (R < 0 || H < 0);
	vCyl = M_PI * R * R * H;						//���������� ��'��� �������
	vCon = M_PI * R * R * H / 3;					//���������� ��'��� ������
	cout << "��'�� ������� = "; cout << vCyl;		//��������� ����������
	cout << endl << "��'�� ������ = "; cout << vCon; //��������� ����������

}