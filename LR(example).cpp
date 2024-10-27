#include <iostream>
#include "windows.h"
#include "iomanip"
#define _USE_MATH_DEFINES
#include "math.h"
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double S, p, a, b, c;
    cout << "Enter a: "; cin >> a;
    cout << "Enter b: "; cin >> b;
    cout << "Enter c: "; cin >> c;
    p = (a + b + c) / 2;
    if (sqrt(p * (p - a) * (p - b) * (p - c) != 0)) S = (sqrt(p * (p - a) * (p - b) * (p - c)));
    else
        cout << "S is can't found";
    cout << setw(6) << "S = " << S << endl;
    system("pause");
    return 0;
}
