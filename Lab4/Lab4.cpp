

#include <iostream>
using namespace std;
int main()
{
	int n,F,i,k;
	float S;
	S = 0;
	cout << "Enter the n:"; cin >> n;
	for (i = 0; i < n; i++) {
		F = 1;
		for (k = 1; k < i + 2; k++) {
			F = F * k;
		}
		S = S + 1. / F;
	}
	cout << S;
}

