

#include <iostream>
using namespace std;
int main()
{
    float a, x, e,y ,pre_y;
    cout << "Enter the a:"; cin >> a; cout << "Enter the b:"; cin >> x; cout << "Enter the e:"; cin >> e;
    y = a;
    pre_y = y;
    while (abs(y * y - pre_y * pre_y) < e) {
        pre_y = y;
        y = 0.5 * (y + x / y);
    }
    cout << y;

}

