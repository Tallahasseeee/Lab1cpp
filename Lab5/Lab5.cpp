#include <iostream>
using namespace std;
int main()
{
	int Sum1;
	int Sum2;
	int i, k, j;
	for (i = 200; i < 300; i++) {
		Sum1 = 0;
		for (j = 1; j < i; j++) {
			if (i % j == 0) {
				Sum1 += j;
		}
		}
		for (k = 200; k < 300; k++) {
			Sum2 = 0;
			for (j = 1; j < i; j++) {
				if (k % j == 0) {
					Sum2 += j;
				}
			}
			if (i == Sum2 && k == Sum1) {
				cout << "Pair of friendly numbers:" << i << " and " << k;
			}
		}
	}
}
