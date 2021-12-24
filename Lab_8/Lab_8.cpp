#include <stdlib.h>
#include <iostream>
#include <time.h>
using namespace std;
double** init(int N);
void output(double** A, int N);
void linear_output(double* M, int n);
double* find(double** A, int N);
double sum(double* M,int size);
void sort(double** A, double** B, double** C, int N);
void fill(double** A, int N, double sum);
int main()
{
    srand(time(NULL));
    int N;
    cout << "Size: ";
    cin >> N;
    while (N < 0) {
        cout << "Wrong data"<< "\n" << "Size: ";
        cin >> N;
    }
    double** A = init(N);
    double** B = init(N);
    double** C = init(N);
    output(A, N);
    cout << "\n\n";
    output(B, N);
    cout << "\n\n";
    output(C, N);
    cout << "\n\n";
    sort(A, B, C, N);
    output(A, N);
    cout << "\n\n";
    output(B, N);
    cout << "\n\n";
    output(C, N);
}

double** init(int N) {
    double** arr = new double* [N];
    for (int i = 0; i < N; i++) {
        arr[i] = new double[N];
        for (int j = 0; j < N; j++) {
            arr[i][j] = (double)(rand()) / RAND_MAX * 32000 - 16000;
        }
    }
    return arr;
}

void output(double** A, int N) {
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++) {
            cout << A[i][j] << "  ";
        }
        cout << '\n';
    }
}

void linear_output(double* M, int n) {
    for (int i = 0; i < n; i++) {
        cout << M[i] << "  ";
    }
}

double* find(double** A, int N) {
    int n = 0;
    double* M = new double[(N * N - N)/2];
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            M[n] = A[i][j];
            n++;
        }
    }
    return M;
}

double sum(double* M, int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += M[i];
    }
    return sum;
}

void sort(double** A, double** B, double** C, int N) {
    int size = (N * N - N) / 2;
    double A_sum = sum(find(A, N),size);
    double B_sum = sum(find(B, N),size);
    double C_sum = sum(find(C, N), size);
    if (A_sum > B_sum && A_sum > C_sum) {
        fill(A, N, A_sum);
    }
    else if (B_sum > A_sum && B_sum > C_sum) {
        fill(B, N, B_sum);
    }
    else {
        fill(C, N, C_sum);
    }
}

void fill(double** A, int N, double sum) {
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++) {
            if (A[i][j] < 0) {
                A[i][j] = sum;
            }
        }
    }
}