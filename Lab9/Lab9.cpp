#include <iostream>
#include <string>
using namespace std;
string init();
string* sort(string str,int* n);
string process(string* A, int* n,int* c);
int str_size(string* A, int* n);
int amount(string str)
{
    int n = count(str.begin(), str.end(), ' ') + 1;
    return n;
}
int main()
{
    string* A;
    string str = init();
    int N = amount(str);
    int* n = &N;
    int counter = 0;
    int* c = &counter;
    cout << "\n\n\n";
    A = sort(str,n);
    string result = process(A, n, c);
    cout << result << "\n\n"<< "Amount of gaps: " << counter;

}

string init() {
    string str;
    cout << "Enter the text: ";
    getline(cin, str);
    while (str.size() >= 60) {
        cout << "This text is too long, enter another one: ";
        getline(cin, str);
    }
    return str;
}

string* sort(string str, int* n) {
    int N = *n;
    string* A = new string[N];
    int len = str.size();
    int m = 0;
    for (int i = 0; i < len; i++) {
        if (str[i] != ' ') {
            A[m] += str[i];
        }
        else {
            m++;
        }
    }
    return A;
}


string process(string* A, int* n, int* c) {
    int counter = 0;
    int N = *n;
    bool flag = true;
    string result = "";
    while (flag == true) {
        for (int i = 0; i < N; i++) {
            if (flag == true) {
                A[i] += ' ';
                counter++;
                if (str_size(A,n) >= 60) {
                    flag = false;
                }
            }
        }
    }
    for (int j = 0; j < N; j++) {
        result += A[j];
    }
    *c = counter;
    return result;
}
int str_size(string* A, int* n) {
    int N = *n;
    int string_size = 0;
    for (int i = 0; i < N; i++) {
        string_size += A[i].size();
    }
    return string_size;
}
