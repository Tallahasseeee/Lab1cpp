
#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, ".1251");
	system("chcp 1251");
	double H, R, vCyl, vCon;							//Îãîëîøåííÿ çì³ííèõ
	//do {
		cout << "Ââåä³òü ðàä³óñ îñíîâè: "; cin >> R;	//Ââåäåííÿ R
		cout << "Ââåä³òü âèñîòó: "; cin >> H;			//Ââåäåííÿ H
	//} while (R < 0 || H < 0);
	vCyl = M_PI * R * R * H;						//Îá÷èñëåííÿ îá'ºìó öèë³íäðà
	vCon = M_PI * R * R * H / 3;					//Îá÷èñëåííÿ îá'ºìó êîíóñà
	cout << "Îá'ºì öèë³íäðà = "; cout << vCyl;		//Âèâåäåííÿ ðåçóëüòàòó
	cout << endl << "Îá'ºì êîíóñà = "; cout << vCon; //Âèâåäåííÿ ðåçóëüòàòó

}
