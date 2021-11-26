
#include <iostream>
using namespace std;
void input();
void process();
void output();
const int n = 7;
float A[n];
int main()
{
	input();
	process();
	output();
}

void input() {
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
}
void process() {
	float min = A[0];
	float max = A[0];
	int min_index = 0;
	int max_index = 0;
	for (int i = 0; i < n; i++) {
		if (A[i] > max) {
			max = A[i];
			max_index = i;
		}
		else if (A[i] < min) {
			min = A[i];
			min_index = i;
		}
	}
	A[max_index] = min;
	A[min_index] = max;
}
void output() {
	for (int i = 0; i < n; i++) {
		cout << A[i] << "  ";
	}
}