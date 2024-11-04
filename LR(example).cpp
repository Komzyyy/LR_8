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
    cout << "Введіть a: "; cin >> a;
    cout << "Введіть b: "; cin >> b;
    cout << "Введіть c: "; cin >> c;
    p = (a + b + c) / 2;
    if (sqrt(p * (p - a) * (p - b) * (p - c) != 0)) S = (sqrt(p * (p - a) * (p - b) * (p - c)));
    else
        cout << "S неможливо знайти";
    cout << setw(6) << "S = " << S << endl;
    system("pause");
    return 0;
}
