
#include <iostream>
using namespace std;

int input(char);
double squareRoot(int,int,int,int);
float factorial(int);
float pow(float,int);
float result(int,int,int);
int main()
{
	int k, m, n;
	k = input('k');
	m = input('m');
	n = input('n');
	cout << result(k, m, n);
}

int input(char letter) {
	int k, m, n;
	if (letter == 'k') {
		cout << "Enter k: ";
		cin >> k;
		return k;
	}
	else if (letter == 'm') {
		cout << "Enter m: ";
		cin >> m;
		return m;
	}
	else if (letter == 'n') {
		cout << "Enter n: ";
		cin >> n;
		return n;
	}
}

double squareRoot(int a, int p,int n,int degree) {
	double x = a;
	for (int i = 0; i < n; i++) {
		x = (1. / p) * (a / pow(x,p-1) + (p - 1) * x);
	}
	x = pow(x, degree);
	return x;
}
float result(int k, int m,int n) {
	float y;
	y = (factorial(k) / factorial(m)) * squareRoot(k, 3, n, 2) - pow(m, 2) * squareRoot(k, 5, n, 3);
	return y;
}
float factorial(int x) {
	float f = 1;
	for (int i = 2; i <= x; i++) {
		f *= i;
	}
	return f;
}
float pow(float x, int y) {
	float dob = 1;
	for (int i = 0; i < y; i++) {
		dob *= x;
	}
	return dob;
}