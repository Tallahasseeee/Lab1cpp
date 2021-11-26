
#include <iostream>
using namespace std;
float* input(int&);
float* process(float *A, int);
void output(float *A, int);
int main()
{
	float *A;
	int n;
	A = input(n);
	A = process(A, n);
	output(A,n);
}

float* input(int &n) {
	cout << "Enter n: "; cin >> n;
	float *p = new float[n];
	for (int i = 0; i < n; i++) {
		cin >> *(p + i);
	}
	return p;
}
float* process(float *A, int n) {
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
	return A;
}
void output(float *A, int n) {
	for (int i = 0; i < n; i++) {
		cout << A[i] << "  ";
	}
}