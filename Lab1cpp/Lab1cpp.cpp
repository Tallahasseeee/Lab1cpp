
#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, ".1251");
	system("chcp 1251");
	double H, R, vCyl, vCon;							//Оголошення змінних
	do {
		cout << "Введіть радіус основи: "; cin >> R;	//Введення R
		cout << "Введіть висоту: "; cin >> H;			//Введення H
	} while (R < 0 || H < 0);
	vCyl = M_PI * R * R * H;						//Обчислення об'єму циліндра
	vCon = M_PI * R * R * H / 3;					//Обчислення об'єму конуса
	cout << "Об'єм циліндра = "; cout << vCyl;		//Виведення результату
	cout << endl << "Об'єм конуса = "; cout << vCon; //Виведення результату

}